#include <stdio.h>
void read(int adj[10][10], int n);
void dfs(int sv, int adj[10][10], int *visited, int n, int stack[20], int *);

int main()
{
    int adj[10][10];
    int visited[10] = {0};
    int stack[20], a[20] = {0};
    int n, i, k = 0, m = 0;

    printf("enter number of vertices");
    scanf("%d", &n);
    read(adj, n);

    dfs(i, adj, visited, n, stack, &m);

    for (i = 0; i < m; i++) {
        printf("stack %d ", stack[m - 1 - i]);
        a[k++] = stack[m - 1 - i];
    }

    printf("\n topological sorting\n");

    for (i = m - 1; i >= 0; i--)
        printf("%d", a[i]);
}

void read(int adj[10][10], int n)
{
    printf("enter the adj matrix");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);
}

void dfs(int sv, int adj[10][10], int *visited, int n, int stack[20], int *m)
{
    printf("%d ", sv);
    visited[sv] = 1;
    // Push to top of stack
    stack[*m] = sv;
    (*m) = (*m) + 1;
    for (int i = 0; i < n; i++)
    {
        if (adj[sv][i] && !visited[i])
            dfs(i, adj, visited, n, stack, m);
    }
}

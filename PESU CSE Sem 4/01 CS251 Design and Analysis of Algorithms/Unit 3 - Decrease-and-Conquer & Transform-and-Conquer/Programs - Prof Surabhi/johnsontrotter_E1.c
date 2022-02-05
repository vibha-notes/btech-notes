#include<stdio.h>
#include<stdlib.h>
#define MAX 10

// Constants
#define RtoL 0
#define LtoR 1

int fact(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res = res * i;
    }
    return res;
}

// Gets largest mobile element
int getmobile(int a[], int dir[], int n) {
    int mprev = 0, mobile = 0;
    for (int i = 0; i < n; i++) {
        // Largest moving element from right to Left
        if (dir[a[i] - 1] == RtoL && i != 0) {
            if (a[i] > a[i - 1] && a[i] > mprev) {
                mobile = a[i];
                mprev = mobile;
            }
        }
        // Largest moving element from left to right
        if (dir[a[i] - 1] == LtoR && i != n - 1) {
            if (a[i] > a[i + 1] && a[i] > mprev) {
                mobile = a[i];
                mprev = mobile;
            }
        }
    }
    if (mobile == 0 && mprev == 0)
        return 0;
    else
        return mobile;
}


int searchperm(int perm[], int n, int mobile) {
    for (int i = 0; i < n; i++)
        if (perm[i] == mobile) {
            return i + 1;
        }
    return -1;
}

void swap(int *ele1, int *ele2) {
    int temp;
    temp = *ele1;
    *ele1 = *ele2;
    *ele2 = temp;
}

// Get next permutation
void getonepermutation(int perm[], int dir[], int n) {
    int mobile = getmobile(perm, dir, n);
    // Gets the position of the mobile element (indexed at 1)
    int pos = searchperm(perm, n, mobile);

    // If pointing left, swap with left element
    if (dir[perm[pos - 1] - 1] == RtoL) {
        swap(&perm[pos - 1], &perm[pos - 2]);
    }

    // If pointing right, swap with right element
    else if (dir[perm[pos - 1] - 1] == LtoR) {
        swap(&perm[pos], &perm[pos - 1]);
    }

    // Check entire array for elements greater than
    // the one being moved and flip direction
    for (int i = 0; i < n; i++) {
        if (perm[i] > mobile) {
            if (dir[perm[i] - 1] == RtoL) {
                dir[perm[i] - 1] = LtoR;
            }
            else if (dir[perm[i] - 1] == LtoR) {
                dir[perm[i] - 1] = RtoL;
            }
        }
    }
    // Print the permutation
    for (int i = 0; i < n; i++) {
        printf("%d ", perm[i]);
    }
    printf("\n");
}

void printpermutation(int n) {
    int perm[MAX], dir[MAX];

    // Initialise with all pointing RtoL, order 1...n
    for (int i = 0; i < n; i++) {
        perm[i] = i + 1;
        dir[i] = RtoL;
    }

    printf("\nPermutations:\n");
    // First permutation
    for (int i = 0; i < n; i++) {
        printf("%d ", perm[i]);
    }
    printf("\n");

    int factn = fact(n);

    // Print subsequent permutations
    for (int i = 1; i < factn; i++) {
        // Gets next permutation
        getonepermutation(perm, dir, n);
    }
}

int main(){
    int n;
    printf("\n Enter the number of objects : \n");
    scanf("%d",&n);
    printpermutation(n);
}
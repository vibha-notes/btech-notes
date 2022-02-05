#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int msort(int a[5000], int low, int high);
int merge(int a[5000], int low, int mid, int high);
int main()
{
  int a[5000], n;
  int i;
  clock_t start, end;
  printf("enter the no of elements");
  scanf("%d", &n);
  printf("enter the elements");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  //a[i]=rand();

  //merge sort
  start = clock();
  printf("%d\n", msort(a, 0, n - 1));
  end = clock();

  //result

  printf("%f", (float)(end - start) / CLOCKS_PER_SEC);
}

int msort(int a[5000], int low, int high)
{
  if (low == high)
    return 0;
  if (low == high - 1)
  {
    if (a[low] == high && a[high] == low)
      return 1;
    else
      return 0;
  }
  int mid = (low + high) / 2;
  int l1 = msort(a, low, mid);
  int l2 = msort(a, mid + 1, high);
  int l3 = merge(a, low, mid, high);
  return l1 + l2 + l3;
}

int merge(int a[5000], int low, int mid, int high)
{
  int i = low;
  int j = mid + 1;
  int k = 0;

  while (i <= mid)
  {
    if (a[i] > mid && a[i] <= high)
      if (i == a[a[i]])
        k++;
    i++;
  }
  return k;
}

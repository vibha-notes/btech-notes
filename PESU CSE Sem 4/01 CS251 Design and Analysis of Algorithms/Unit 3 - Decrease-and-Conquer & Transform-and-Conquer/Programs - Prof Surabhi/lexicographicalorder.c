//#include"session4_tsp.h"
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define Max 10000

int fact(int n) { 
    int res = 1; 
    for (int i = 1; i <= n; i++) 
        res = res * i; 
    return res; 
} 
int get_next_permutation(int *permutation, int n) {
	int i;
	int j;
	int k;
	int temp_int;
	int swaps;

	//find i
	for(i = n-2; i >= 0; i--) {
		if(permutation[i] < permutation[i+1]) {
			break;
		}
	}
	if(i == -1) {
		return 0;
	}

	for(j = i+1; j < n; j++) {
		if(permutation[j] < permutation[i]) {
			break;
		}
	}
	j--;

	temp_int = permutation[i];
	permutation[i] = permutation[j];
	permutation[j] = temp_int;

	//printf("DEBUG*i=%d,j=%d*", i, j); print_permutation(permutation, n);
	swaps = (n-1-i)/2;
	for(k = 0; k < swaps; k++) {
		temp_int = permutation[i+1+k];
		permutation[i+1+k] = permutation[n-1-k];
		permutation[n-1-k] = temp_int;
	}
	return 1;
}

void print_permutation(int *permutation, int n) {
	int i;
	
	for(i = 0; i < n; i++) {
		printf("%d ", permutation[i]);
	}
	printf("\n");
	
}
int main(){
    int permutation[Max];
	int flag;
    int n;
	int factofn;
    printf("\n Enter the number of items to be permuted\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        permutation[i]=i+1;
	for(int i=0;i<n;i++)
        printf("%d ",permutation[i]);
	printf("\n");
	factofn=fact(n);
	for(int i=1;i<factofn;i++){
    	flag=get_next_permutation(permutation , n);
		if(flag==1)
			print_permutation(permutation,n);
	}
}

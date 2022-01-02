#include <stdio.h>
#include "5_palin.h"

int main()
{
	int n;
	scanf("%d", &n);
	// check whether it is a palindrome
	if(is_palindrome(n))
	{
		printf("%d is a palindrome\n", n);
	}
	else
	{
		printf("%d is not a palindrome\n", n);
	}
}

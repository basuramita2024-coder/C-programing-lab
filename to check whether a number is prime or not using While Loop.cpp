//Write a C program to check whether a number is prime or not using While Loop then using For Loop//
#include <stdio.h>
int main()
{
	int n, i=2, c=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
			c=1;
		i++;
	}
	if(n>1 && c==0)
		printf("Its a Prime Number");
	else
		printf("It's not a Prime Number");
	return 0;
}

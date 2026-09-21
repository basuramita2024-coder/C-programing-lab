/*Write a C program which read an integer value and check whether it is positive 
or negative after satisfying the integer value greater than 0. If it is positive 
then check whether it is odd or even */
#include <stdio.h>
int main()
{
	int n;
	printf("Enter an integer value: ");
	scanf("%d", &n);
	if(n>0)
	{
		if(n%2==0)
		{
			printf("The integer value is positive even\n");
		}
		else
		{
			printf("The integer value is positive odd.\n");
		}
	}
	else
	{
		printf("The integer value is negative.\n");
	}
	return 0;	
}

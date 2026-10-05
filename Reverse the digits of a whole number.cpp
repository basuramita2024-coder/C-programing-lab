//Write a C program reverse the digits of a whole number//
#include <stdio.h>
int main()
{
	int n, r=0, d;
	printf("Enter a whole number: ");
	scanf("%d",&n);
	
	while(n)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
	
	printf("%d",r);
	return 0;
}

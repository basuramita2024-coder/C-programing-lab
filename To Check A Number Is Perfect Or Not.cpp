//Write A C Program To Check A Number Is Perfect Or Not//
#include <stdio.h>
int main()
{
	int n, i, c=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1; i<n; i++)
	{
		if(n%i==0)
		c=c+i;
	}
	if(n>0 && c==n)
		printf("It's a perfect number");
	else
		printf("It's not a perfect number");
	return 0;
}

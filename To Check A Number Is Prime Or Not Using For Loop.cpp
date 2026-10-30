// Write A C Program To Check A Number Is Prime Or Not Using For Loop //
#include <stdio.h>
int main()
{
	int n, i, c=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		if(n%1==0)
		c++;
	}
	if(n>1 && c==2)
		printf("It's a prime number");
	else
		printf("It's not a prime number");
	return 0;
}

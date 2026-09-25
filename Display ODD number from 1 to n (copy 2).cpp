
#include <stdio.h>
int main()
{
	int n, i = 1;
	
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Odd numbers from 1 to %d\n", n);
	while(i <= n)
	{
		printf("%d\n",i);
		i=i+2;
	}
}

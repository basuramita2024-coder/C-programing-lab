/* Write a C program find the greatest among three inputed numbers*/
#include <stdio.h>
int main()
{
	int a, b, c;
	
	printf("Enter three integer number: ");
	scanf("%d, %d, %d", &a,&b,&c);
	
	if (a > b && a > c)
		printf ("Greatest Number=%d",a);
	else if (b > a && b > c)
		printf ("Greatest Number=%d",b);
	else 
		printf ("Greatest Number=%d",c);
	
	return 0;
}

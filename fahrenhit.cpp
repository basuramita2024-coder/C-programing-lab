// write a c programme to convert celcius to fahrenhit
#include <stdio.h>
int main()
{
	float c, f;
	printf("enter the value of celcius:");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("in fahrenhit=%.2f\n",f);
	return 0;
} 

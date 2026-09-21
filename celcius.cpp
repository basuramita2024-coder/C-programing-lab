#include <stdio.h>
int main()
{
	float c, f;
	printf("enter the value of fahrenhit:");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("in celcius=%.2f\n",c);
	return 0;
}

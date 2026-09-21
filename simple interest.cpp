// write a c programme to calculate the siple interest
#include <stdio.h>
int main()
{
	float p, r, t, si;
	printf("enter the principle amount:");
	scanf("%f", &p);
	printf("enter the rate of interest:");
	scanf("%f", &r);
	printf("enter the time:");
	scanf("%f", &t);
	si=(p*r*t)/100;
	printf("simplr interest: %d",si);
	return 0;
}

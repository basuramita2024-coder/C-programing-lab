/* Write a C program to calculate the electricity bill based on the number of 
units consume the charges are
0-100 = 2rs/unit
101-200 = 3rs/unit
201-300 = 5rs/unit
above 300 = 7rs/unit*/
#include <stdio.h>
int main()
{
	int units;
	float bills;
	printf("Enter the number of units: ");
	scanf("%d",&units);
	if(units<=100)
	{
		bills=units*2;
	}
	else
	{
		if(units<=200)
		{
			bills=(100*2)+(units-100)*3;
		}
		else
		{
			if(units<=300)
			{
				bills=(100*2)+(100*3)+(units-200)*5;
			}
			else
			{
				bills=(100*2)+(100*3)+(100*5)+(units-300)*7;	
			}
		}	
	}
	printf("Electricity Bill = Rs.%2f",bills);
	return 0;
}

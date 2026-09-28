//1+2+4+7+11...... upto terms w. c. p. to calculate sum of given series.
#include <stdio.h>
int main()
{
	int term=1, sum=0, i=1, n, d=1;
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	while(i <= n)
	{
		sum = sum+term;
		term = term +d;
		d++;
		i++;
	}
	printf("Sum of the series = %d", sum); 
	
	return 0;
}

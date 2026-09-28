//2+5+8+11+14... upto terms w. c. p. to calculate sum of given series.
#include <stdio.h>
int main()
{
	int term=2, sum=0, i=1, n;
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	while(i <= n)
	{
		sum = sum+term;
		term = term +3;
		
		i++;
	}
	printf("Sum of the series = %d", sum); 
	
	return 0;
}

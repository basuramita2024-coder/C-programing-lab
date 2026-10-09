/*write a c program to find the sum of the following series.
1+10+101+1010+.... upto terms*/
#include <stdio.h>
int main()
{
	int n, i=1, t=1, sum=0;
	scanf("%d",&n);
	while(i <= n)
	{
		sum=sum+t;
		printf("%d", t);
		
		if(i % 2 == 1)
			t = t*10;
		else
			t = t * 10 +1;
			
		i++;
	}
	printf("\nSum = %d", sum);
	return 0;
}

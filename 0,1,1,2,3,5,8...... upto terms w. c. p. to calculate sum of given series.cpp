 //0,1,1,2,3,5,8...... upto terms .c.p. to calculate sum of given series.
 #include <stdio.h>
 int main()
 {
 	int a=0, b=1, c, sum=0, i=1, n;
 	printf("Enter the number of terms : ");
 	scanf("%d",&n);
 	
 	while(i <= n)
 	{
 		printf("%d\t",a);
 		sum = sum + a;
 		c = a + b;
 		a = b;
 		b = c;
 		i++;
	}
	printf("\nSum of the Fibonacci series = %d ", sum);
	
	return 0;
 }

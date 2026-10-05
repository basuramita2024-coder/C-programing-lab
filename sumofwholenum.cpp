//wcp trifabonacci series
//
#include<stdio.h>
int main() {
	int n;
	printf("enter the num");
	scanf("%d",&n);
	int term1=0;
	int term2=1;
	int term3=1;
	int term4;
	int i=1;
	while(i<=n){
		printf("%d",term1);
		term4=term1+term2+term3;
		term1=term2;
		term2=term3;
		term3=term4;
		i+=1;
	}	
}



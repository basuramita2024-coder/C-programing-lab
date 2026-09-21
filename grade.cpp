/*Write a c programme to take input of marks of a student display the grades 
acording to the following conditions.
The conditions are:
If marks>=90, Grade A
If marks>=75, Grade B
If marks>=50, Grade C
Otherwise the student will conciderd as faild*/
#include<stdio.h>
int main()
{
	int marks;
	printf("enter the marks:");
	scanf("%d",&marks);
	if(marks>=90)
	{
		printf("Grade: A\n");
	}
	else if(marks>=75){
		printf("Grade: B\n");	
	}
	else if(marks>=50){
		printf("Grade: C\n");
	}
	else{
		printf("Fail");
	}
	return 0;
}

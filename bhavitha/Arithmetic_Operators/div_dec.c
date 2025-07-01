#include<stdio.h>
int main()
{
int num_1;
int num_2;
int num_3;
float result;
	printf("we are performing division\n");
	
	printf("Enter the value of num_1:");
	scanf("%d",&num_1);

	printf("Enter the value of num_2:");
	scanf("%d",&num_2);
	
	printf("Enter the value of num_3:");
	scanf("%d",&num_3);
	
	 result=num_1/(num_2/num_3);
	printf("Result:%.3f", result);
	return 1;
}
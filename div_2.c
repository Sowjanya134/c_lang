#include<stdio.h>
int main()
{
	int num_1;
	int num_2;
	int num_3;
	int num_4;
	float result;
	
	printf("enter the num_1");
	scanf("%d",&num_1);
	
	printf("enter the num_2");
	scanf("%d",&num_2);
	
	printf("enter the num_3");
	scanf("%d",&num_3);
	
	printf("enter the num_4");
	scanf("%d",&num_4);
	
	result=(num_1/num_4)/(num_2/num_3);
	printf("the value of result%2f", result);
	return 0;
}
	
	
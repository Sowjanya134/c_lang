#include<stdio.h>
int main()
{
	int num_1;
	int num_2;
	int num_3;
	int num_4;
	int num_5;
	float average;
	printf("enter the num_1 value");
	scanf("%d",&num_1);
	printf("the value of num_1:\n%d",num_1);
	
	printf("enter the num_2 value");
	scanf("%d",&num_2);
	printf("the value of num_2:\n%d",num_2);
	
	printf("enter the num_3 value");
	scanf("%d",&num_3);
	printf("the value of num_3:\n%d",num_3);
	
	printf("enter the num_4 value");
	scanf("%d",&num_4);
	printf("the value of num_4:\n%d",num_4);
	
	printf("enter the num_5 value");
	scanf("%d",&num_5);
	printf("the value of num_5:\n%d",num_5);
	average=(num_1+num_2+num_3+num_4+num_5)/5;
	printf("\n the average is %d:",(num_1+num_2+num_3+num_4+num_5)/5);
	return 0;
}
	
	
	
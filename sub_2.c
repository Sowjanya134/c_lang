#include<stdio.h>
int main()
{
	int num_1=123;
	int num_2=234;
	int num_3=-345;
	int num_4=-456;
	int num_5=num_1-num_2-num_3-num_4;
	
	printf("the value of num_1:%d\n",num_1);
	printf("the value of num_2:%d\n",num_2);
	printf("the value of num_3:%d\n",num_3);
	printf("the value of num_4:%d\n",num_4);
	printf("the value of num_1-num_2-num_3-num_4:%d",num_5);
	return 0;
}
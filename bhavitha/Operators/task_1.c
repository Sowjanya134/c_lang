#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m;

	
	printf("Enter the value of a:");
	scanf("%d",&a);

	printf("Enter the value of b:");
	scanf("%d",&b);

 	c=a+b;
	printf("The value of c(a+b):%d\n",c);

	d=a-b;
	printf("The value of d(a-b):%d\n",d);


	e=a/b;
	printf("The value of e(a/b):%d\n",e);

	f=a*b;
	printf("The value of f(a*b):%d\n",f);

	g=a%b;
	printf("The value of g(a%b):%d\n",g);

	h=a==b;
	printf("The value of h(a==b):%d\n",h);

	i=a!=b;
	printf("The value of i(a!=b):%d\n",i);

	j=a<b;
	printf("The value of j(a<b):%d\n",j);

	k=a>b;
	printf("The value of k(a>b):%d\n",k);

	l=a<=b;
	printf("The value of l(a<=b):%d\n",l);

	m=a>=b;
	printf("The value of m(a>=b):%d\n",m);

	return 1;
}	
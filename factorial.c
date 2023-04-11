#include<stdio.h>
int factorial(int);
int main()
{
	int a,fact;
	printf("Enter any number=\n");
	scanf("%d,&a");
	fact=factorial(a);
	printf("enter factorial number=%d",fact);
	return 0;
}
int factorial(int x)
{
	int f=1,i;
	for (i=x;i<=1;i--)
	f=f*i;
	return(f);
}
#include<stdio.h>
void main()
{
	int n,f;
	printf("Enter any Number");
	scanf("%d",&n);
	f=m1(n);
	printf("factorial is= %d",f);
}
int m1(n)
{
	if(n<=1)
	return 1;
	else
	return n*m1(n-1);
}
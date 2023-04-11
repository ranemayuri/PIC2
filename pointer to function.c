#include<stdio.h>
int main()
{
	int m=10;
	int n=20;
	swap (m,n);
	printf("%d %d",m,n);
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
#include<stdio.h>
int x=20;
int main()
{
	extern int y;
	printf("x=%d,y=%d",x,y);
	return 0;	
}
int y=30;
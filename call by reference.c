void fun(int*,int*);
void main()
{
	int x=5,y=7;
	fun(5,7);
	printf("x=%d y=%d",x,y);
}
void fun(int *x,int *y)
{
	x=7;
	y=5;
	printf("x=%d y=%d",*x,*y);
}
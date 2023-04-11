#include<stdio.h>
int main()
{
	struct book
	{
	char name;
	float price;
	int page;
};
struct book b1,b2,b3;

printf("Enter name,price &no.of page of 3 books");
scanf("%c%f%d",&b1.name,&b1.price,&b1.page);
scanf("%c%f%d",&b2.name,&b2.price,&b2.page);
scanf("%c%f%d",&b3.name,&b3.price,&b3.page);

printf("And this is what you entered");
scanf("%c%f%d",b1.name,b1.price,b1.page);
scanf("%c%f%d",b2.name,b2.price,b2.page);
scanf("%c%f%d",b3.name,b3.price,b3.page);
}





#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[10];
};
void main()
{
	int i;
	struct student st[5];
	printf("Enter Records of 5 students");
	for(i=0;i<5;i++);
	{
		printf("\nEnter Roll no:");
		scanf("%d",&st[i].rollno);
		printf("\nEnter Name:");
		scanf("%s",&st[i].name);
	}
	printf("\nStudent Information List:");
	for(i=0;i<5;i++)
	{
		printf("\nRoll no:%d,Name:%d,st[i].Roll no,st[i].name");
	}
	getch();
}
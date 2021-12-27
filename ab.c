#include<stdio.h>
void main()
{
	printf("function calling my self");
	add();
	sub();
    mul();
}
void add()
{
	int a,b;
	printf("\nEnter the value of a and b:");
	scanf("%d %d",&a,&b);
	printf("sum:%d",a+b);
}
void sub()
{
	int a,b;
	printf("\nEnter the value of a and b:");
	scanf("%d %d",&a,&b);
	printf("sum:%d",a-b);
}
void mul()
{
	int a,b;
	printf("\nEnter the value of a and b:");
	scanf("%d %d",&a,&b);
	printf("sum%d",a*b);
}

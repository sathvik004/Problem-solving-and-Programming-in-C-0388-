//Program to check if given number is even or odd
#include <stdio.h>
int main()
{
	int a;
	printf("enter the number to be checked: ");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("the given number is even");
	}
	else
	{
		printf("the given number is odd");
	}
}

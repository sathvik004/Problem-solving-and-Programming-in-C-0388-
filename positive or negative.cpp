#include<stdio.h>
main()
{
	int a;
	printf("Enter the value of a:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("Given numner is positive");
	}
	else if(a=0)
	{
		printf("Given number is eqaul to zero(0)");
	}
	else
	{
		printf("Given number is negative");
	}
	return 0;
}

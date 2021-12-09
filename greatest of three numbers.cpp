#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("A is the greatest");
	}
	else if(b>c)
	{
		printf("B is the greatest");
	}
	else
	{
		printf("C is the greatest");
	}
	return 0;
}

#include<stdio.h>
main()
{
	int i,n;
	printf("Enter the value of i:");
	scanf("%d",&i);
	printf("Enter the value of n:");
	scanf("%d",&n);
	if(i<n)
	{
		for(i;i<n;i++)
		printf("\n%d",i);
		}
	else if(i=n)
	{
		printf("\n%d",i);
	}
	else
	{
		for(i;i>n;i--)
		printf("\n%d",i);
	}
	return 0;
}

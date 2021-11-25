#include<stdio.h>
main()
{
	int a,b;
	printf("enter the value a and b");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		for(a=a;a>=b;a--)
		{
			printf("\n%d",a);
		}
	}
	else if(b>a)
	{
		for(a=a;a<=b;a++)
		{
			printf("\n%d",a);
			}
	}
	return 0;
}

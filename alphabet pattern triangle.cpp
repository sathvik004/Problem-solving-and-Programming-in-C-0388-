#include<stdio.h>
main()
{
    int i,j;
    for(j=1;j<28;j++)
    {
    	for(i=1;i<j;i++)
    	{
    		printf(" %c",i+64);
		}
		printf("\n");
	}
	for(j=22;j>1;j--)
    {
    	for(i=1;i<j;i++)
    	{
    		printf(" %d",i);
		}
		printf("\n");
	}
	return 0;
}

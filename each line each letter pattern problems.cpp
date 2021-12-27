#include<stdio.h>
main()
{
	int i,j;
	char k=0;
	for(j=1;j<=7;j++)
	{
		for(i=1;i<j;i++)
		{
		printf("%c",k+64);
	    }
	
	printf("\n");
	k++;
}
return 0;
}

#include<stdio.h>
main()
{
	int i,n;
	printf("Enter the value n:");
	scanf("%d",&n);
		for(i=1;i<=n;i++)
    {
		printf("%d*%d=%d\n",n,i,i*n);
	}
	return 0;
}

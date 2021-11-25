#include<stdio.h>
main()
{
	int h,m,s;
	printf("Enter the value of h");
	scanf("%d",&h);
	m=60*h;
	s=60*m;
	printf("%d",m);
	printf("\n%d",s);
	return 0;
}

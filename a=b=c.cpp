#include<stdio.h>
main()
{
	int a,b,c;
	a=10;
	b=20;
	c=30;
	a=b;
	b=c;
	c=a;
	printf("the value of a is" "%d",b);
	printf("\nthe value of b is" "%d",c);
	printf("\nthe value of c is" "%d",a);
	return 0;
}

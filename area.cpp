#include<stdio.h>
main()
{
	float a,acre,hec;
	printf("enter a");
	scanf("%f",&a);
	acre=a/2.47;
	hec=acre/2.47;
	printf("%f",acre);
	printf("\n%f",hec);
	return 0;
}

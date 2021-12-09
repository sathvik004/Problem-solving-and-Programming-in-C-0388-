#include<stdio.h>
main()
{
	int l,b,h,volume;
	printf("Enter the value length:");
	scanf("%d",&l);
	printf("Enter the value Breadth:");
	scanf("%d",&b);
	printf("Enter the value Height:");
	scanf("%d",&h);
	volume=(l*b*h)/3;
	printf("Volume of pyramid=%d",volume);
	return 0;
}

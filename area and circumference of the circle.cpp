#include<stdio.h>
main()
{
	int r,area,circumference;
	printf("Enter the Radius:");
	scanf("%d",&r);
	area=3.14*r*r;
	circumference=2*3.14*r;
	printf("\nArea of the circle=%d",area);
	printf("\nCircumference of the circle=%d",circumference);
	return 0;
}

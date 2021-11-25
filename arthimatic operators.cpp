#include<stdio.h>
main()
{
	int a,b,c1,c2,c4;
	float c3,c5;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	c1=a+b;c2=a*b;c3=a/b;c4=a-b;c5=a%b;
	printf("Addition of two numbers=%d",c1);
	printf("\nmultiplication of two numbers=%d",c2);
	printf("\ndivision of two numbers=%.2f",c3);
	printf("\nsubtraction of two numbers=%d",c4);
	printf("\npercentage of two numbers=%f",c5);
    if(a<b)
    {
    printf("\na<b");
    } 
    else
    {
    	printf("\na>b");
}
	return 0;
	
}

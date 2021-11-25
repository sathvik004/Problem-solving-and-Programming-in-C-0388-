#include<stdio.h>
#include<math.h>
main()
{
	float a,p,r,n,t;
	
	printf("Enter the value of p");
	scanf("%f",&p);
	printf("Enter the value of r");
	scanf("\n%f",&r);
	printf("Enter the value of n");
	scanf("\n%f",&n);
	printf("Enter the value of t");
	scanf("\n%f",&t);
	a=p*(pow((1+r/n),n*t));
	printf("%f",a);
	return 0;
}

#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,delta,r1,r2;
	printf("Enter the values of a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	delta=(b*b)-(4*a*c);
	r1=(-b+sqrt(delta))/2*a;
	r2=(-b-sqrt(delta))/2*a;
	printf("\nRoots are=%f %f",r1,r2);
	if(delta>0)
	{
		printf("\nRoots are real and distinct");
	}
	else if(delta=0)
	{
		printf("\nRoots are real and equal");
	}
	else
	{
		printf("\nRoots are real and imaginary");
    }
	return 0;
}

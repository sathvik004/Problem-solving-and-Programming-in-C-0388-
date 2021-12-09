#include<stdio.h>
main()
{
	float SI,p,r,t;
	printf("Enter the initial principal balance:");
	scanf("%f",&p);
	printf("Enter the annual interest rate:");
	scanf("%f",&r);
	printf("Enter the time(in years):");
	scanf("%f",&t);
	SI=(p*t*r)/100;
	printf("\nsimple interest is:%f",SI);
	return 0;
}

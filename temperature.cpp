#include<stdio.h>
main()
{
	float c,k,f;
	printf("enter the value of c");
	scanf("%f",&c);
	k=c+273;
	f=(k-273)*(9/5)+32;
	printf("%f",k);
	printf("\n%f",f);
	return 0;
}

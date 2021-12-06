#include<stdio.h>
int main()
{
    int a,n,c;
    a=4;
    printf("Enter the value of n:");
    scanf("%d",&n);
	while(n<16)
	{
	   c=n*a;
	   printf("\n%d*%d=%d",n,a,c);
	   ++n;
	}
}


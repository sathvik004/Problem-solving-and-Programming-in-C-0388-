#include<stdio.h>
int main()
{
	int a=1,b=11;
	for(a=1;a<20;a++)
	{
		printf("\na after increament%d",++a);
	}
	for(b=1;b<20;b++)
	{
		printf("\nb after increament%d",b++);
	}
	return 0;
}

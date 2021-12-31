#include<stdio.h>
main()
{
	char a;
	printf("Enter the sentence:");
    while(a=getchar())
	{
	if(a>=65 && a<=90)
	{
     putchar(a+32);
	}
	else
	{
		putchar(a);
	}
}
}

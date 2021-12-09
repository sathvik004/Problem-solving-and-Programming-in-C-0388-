#include<stdio.h>
int main()
{
	int ch;
	float a,b;
	printf("\nEnter your choice");
	scanf("%d",&ch);
	printf("Enter the value a:");
	scanf("%f",&a);
		printf("Enter the value b:");
	scanf("%f",&b);
	switch (ch) 
		{
		add:
		case 0:
		printf("%f",a+b);
		break;
		
		case 1:
		printf("%f",a-b);
		break;
		
		case 2:
		printf("%.1f",a/b);
		break;
		
		case 3:
		printf("%f",a*b);
		break;	
		
		case 4:
		goto add;
		break;
		
		default:
			printf("\nENTER THE CORRECT VALUE");
	}
	return 0;
}

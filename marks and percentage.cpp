#include<stdio.h>
main()
{
	float Totalmarks,percentage,sub1,sub2,sub3,sub4,sub5,sub6,sub7;
	printf("Enter the marks in subject 1:");
	scanf("%f",&sub1);
	printf("Enter the marks in subject 2:");
	scanf("%f",&sub2);
	printf("Enter the marks in subject 3:");
	scanf("%f",&sub3);
	printf("Enter the marks in subject 4:");
	scanf("%f",&sub4);
	printf("Enter the marks in subject 5:");
	scanf("%f",&sub5);
	printf("Enter the marks in subject 6:");
	scanf("%f",&sub6);
	printf("Enter the marks in subject 7:");
	scanf("%f",&sub7);
	Totalmarks=sub1+sub2+sub3+sub4+sub5+sub6+sub7;
	percentage=(Totalmarks*100)/700;
	printf("Total marks=%f",Totalmarks);
	printf("\nPercentage=%f",percentage);
	return 0;
}

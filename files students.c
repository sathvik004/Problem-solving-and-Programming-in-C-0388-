#include<stdio.h>
void main()
{
	int i,r;
	char name[15],cr[25];
	FILE *fp;
	fp=fopen("student.txt","w");
	printf("Enter age:");
	scanf("%d",&i);
	printf("Enter your name:");
	scanf("%s",&name);
	printf("Enter your roll number:");
	scanf("%d",&r);
	printf("Enter your course:");
	scanf("%s",&cr);
	fprintf("%d",i);
	fprintf("%s",name);
	fprintf("%d",r);
	fprintf("%s",cr);
	fclose(fp);
}

#include<stdio.h>
void main()
{
	int i;
	char name[15];
	FILE *fp;
	fp=fopen("gitam.txt","w");
	printf("Enter age:");
	scanf("%d",&i);
	printf("\nEnter your name:");
	scanf("%s",&name);
	fprintf("%d\n%s",i,name);
	fclose(fp);
}

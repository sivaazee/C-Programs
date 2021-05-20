#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("D:/Fact.java","r");
	if(fp==NULL)
	{
		printf("file not existed");
		exit(0);
	}
	while((ch=getc(fp))!=EOF)
	{
		//putchar(ch);
		printf("%c",ch);
	}
	fclose(fp);
}

#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp,*fp_copy;
	char ch;
	fp=fopen("2.c","r");
	if(fp==NULL)
	{
		printf("file not existed");
		exit(0);
	}
	fp_copy=fopen("new.txt","w");
	if(fp_copy==NULL)
	{
		printf("cannot open a file");
		exit(0);
	}
	while((ch=getc(fp))!=EOF)
	{
		putc(ch,fp_copy);
	}
fclose(fp_copy);
printf("the copied contents are\n");
fp_copy=fopen("new.txt","r");
while((ch=getc(fp_copy))!=EOF)
{
	putchar(ch);
}
fclose(fp_copy);
fclose(fp);
}

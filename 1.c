#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("file1.txt","w");
	while((ch=getchar())!=EOF)
	{
		putc(ch,fp);
	}
	fclose(fp);
}

#include<stdio.h>
void main()
{
	FILE *fp=fopen("stst.c","r");
	char s[30];
	fgets(s,30,fp);
	printf("%s\n",s);
	fclose(fp);
}

#include<stdio.h>
void main()
{
	FILE *fp=fopen("stst.c","r");
	char buff[28];
	while((fscanf(fp,"%s",buff))!=EOF)
	{
		printf("%s\n",buff);
	}
	fclose(fp);
}

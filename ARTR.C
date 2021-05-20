/*program to calculate area of triangle using heron's formula*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int a,b,c,s,area;
  clrscr();
  printf("enter the values of a,b,c");
  scanf("%d%d%d",&a,&b,&c);
  s=(a+b+c)/2;
  area=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("area of triangle=%d",area);
  getch();
}
//program for max and min
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 printf("enter first number:");
 scanf("%d",&a);
 printf("enter second number:");
 scanf("%d",&b);
 if(a>b)
 printf("\nMaximum=%d",a);
 else
 printf("\nMinimum=%d",b);
 getch();
 }
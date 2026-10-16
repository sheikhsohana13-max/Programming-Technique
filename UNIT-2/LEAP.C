//program to find year is leap or not
#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("Enter year:");
scanf("%d",&year);
if((year%400==0)||(year%4==0&&year%100!=0))
printf("%dis a leap year",year);
else
printf("%d is not leap year",year);
getch();
}
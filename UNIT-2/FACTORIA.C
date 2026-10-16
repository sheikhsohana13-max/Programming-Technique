//program to find factorial
#include<stdio.h>
#include<conio.h>
void main()
{
int num,i;
int factorial=1;
clrscr();
printf("Enter number:");
 scanf("%d",&num);

 for(i=1;i<=num;i++)
 {
 factorial=factorial*i;
 }
 printf("factorial=%d",factorial);
 getch();
 }
//program to find divisible
#include<stdio.h>
#include<conio.h>
void main( )
{
int a,b;
clrscr();
printf("Enter first number:");
 scanf("%d",&a);
printf("Enter second number:");
 scanf("%d",&b);
 if(a%b==0)
 printf("%d is divisible by %d",a,b);
 else
 printf("%d is not divisible by %d",a,b);
 getch();
 }
//program of interchange variable by taking third variable
#include<stdio.h>
#include<conio.h>
void main()
{
 int num1,num2,temp;
 clrscr();
 printf("Enter First Number:");
 scanf("%d",&num1);
 printf("Enter Second Number:");
 scanf("%d",&num2);
 temp=num1;
 num1=num2;
 num2=temp;
 printf("\nAfter Swapping:");
 printf("\nFirst number=%d",num1);
 printf("\nSecond number=%d",num2);
 getch();
 }
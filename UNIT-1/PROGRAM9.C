//program of interchange without third variable
#include<stdio.h>
#include<conio.h>
void main()
{
  int num1,num2;
  clrscr();
  printf("Enter First Number:");
  scanf("%d",&num1);
  printf("Enter Second Number:");
  scanf("%d",&num2);
  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
  printf("\nAfter Swapping:");
  printf("\nFirst Number:");
  printf("\nSecond Number:");
  getch();
  }
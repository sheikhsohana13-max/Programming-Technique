//PROGRAM FOR ODD OR EVEN
#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  clrscr();
  printf("Enter a number:");
  scanf("%d",&a);
  if(a%2==0)
  printf("\nEven Number",a);
  else
  printf("\nOdd Number",a);
  getch();
 }
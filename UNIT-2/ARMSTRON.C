//program to check armstrong number
#include<stdio.h>
#include<conio.h>
void main()
{
int num,original,digit,sum=0;
clrscr();
printf("Enter number:");
scanf("%d",&num);
original=num;
while(num>0)
{
digit=num%10;
sum=sum+digit*digit*digit;
num=num/10;
}
if(original==sum)
 printf("Number is armstrong");
 else
 printf("Number is not armstrong");
 getch();
 }
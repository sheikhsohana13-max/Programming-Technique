//program
#include<stdio.h>
#include<conio.h>
void main()
{
int count,num,sum=0;
clrscr();
printf("Enter a positive number:");
scanf("%d",&num);
for(count=1;count<=num;count++)
{ sum=sum+count;
}
printf("\nsum:=%d",sum);

getch();
}
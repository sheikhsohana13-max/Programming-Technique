   #include<stdio.h>
   #include<conio.h>
   void main()
   { int a,b;
     clrscr();
     printf("Enter First Number:");
     scanf("%d",&a);
     printf("Enter Second Number:");
     scanf("%d",&b);
     printf("\nAddition=%d",a+b);
     printf("\nSubtraction=%d",a-b);
     printf("\nMultiplication=%d",a*b);
     printf("\nDivision=%d",a/b);
     printf("\nModulus=%d",a%b);
     getch();
   }
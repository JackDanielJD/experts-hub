#include<stdio.h>
#include<conio.h>
void main ()
{
   int Number1, Number2, o1, o2, o3, o4, o5;
   clrscr();
   printf("Enter Number1 & Number2 :");
   scanf("%d%d",&Number1,&Number2);
   o1=Number1+Number2;
   o2=Number1-Number2;
   o3=Number1*Number2;
   o4=Number1/Number2;
   o5=Number1%Number2;
   printf("\n\tSum of values are: %d\n\t",o1);
   printf("Difference of values are: %d\n\t",o2);
   printf("Multiplication of values are: %d\n\t",o3);
   printf("Divition value of values are: %d\n\t",o4);
   printf("Modulo value of values are: %d\n\t", o5);
   getch();

}
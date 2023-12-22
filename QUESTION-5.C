#include<stdio.h>
#include<conio.h>

main()
{
	 int year1,year2;
	 clrscr();
	 printf("Enter value of year 1 : ");
	 scanf("%d",&year1);
	 printf("Enter value of year 2 : ");
	 scanf("%d",&year2);
	 while (year1<=year2)
	 {
	   if (year1%4==0)
	   {
	     printf("%d\n",year1);
	   }
	   year1++;
	 }
	 getch();
}
#include<stdio.h>
#include<conio.h>
#define pi 3.14

main()
{
	  int r,area;
	  clrscr();
	  printf("Enter Value of r : ");
	  scanf("%d",&r);
	  area=pi*r*r;
	  printf("Area Of Circle : %d",area);
	  getch();
}
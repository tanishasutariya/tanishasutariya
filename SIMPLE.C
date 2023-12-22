#include<stdio.h>
#include<conio.h>

main()
{
		float p,r,t,Sp;
		clrscr();
		printf("Enter Value of p : ");
		scanf("%f",&p);
		printf("Enter VAlue of r : ");
		scanf("%f",&r);
		printf("Enter Value of t : ");
		scanf("%f",&t);
		Sp=(p*r*t)/100;
		printf("Sp : %f",Sp);
		getch();
}
#include<stdio.h>
#include<conio.h>

main()
{
	 int a,n,mul=1;
	 clrscr();
	 printf("Enter any number : ");
	 scanf("%d",&n);
	 for (a=1;a<=n;a++)
	 {
	   mul*=a;
	 }
	 printf("Factorial : %d",mul);
	 getch();
}
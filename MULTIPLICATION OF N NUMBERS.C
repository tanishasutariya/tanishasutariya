#include<stdio.h>
#include<conio.h>

main()
{
	 int n,a=1;
	 clrscr();
	 printf("Enter any number : ");
	 scanf("%d",&n);
	 while (a<=10)
	 {
	   printf("%dx%d=%d\n",n,a,n*a);
	   a++;
	 }
	 getch();
}
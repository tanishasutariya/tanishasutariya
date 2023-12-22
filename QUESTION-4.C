#include<stdio.h>
#include<conio.h>

main()
{
	   int a=1,n;
	   clrscr();
	   printf("Enter value of n : ");
	   scanf("%d",&n);
	   while (n>=1)
	   {
	     if (n%2==1)
	     {
	       printf("%d\n",n);
	     }
	     n--;
	   }
	   getch();
}
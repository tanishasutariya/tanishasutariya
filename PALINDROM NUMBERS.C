#include<stdio.h>
#include<conio.h>

main()
{
	 int n,rem,rev=0,palindrom;
	 clrscr();
	 printf("Enter any number : ");
	 scanf("%d",&n);
	 palindrom=n;
	 while (n!=0)
	 {
	    rem=n%10;
	    rev=rev*10+rem;
	    n=n/10;
	 }
	    if (palindrom==rev)
	    {
	      printf("This is palindrom number as %d = %d ",palindrom,rev);
	    }
	    else
	    {
	      printf("This is not palindrom number!! ");
	    }
	 getch();
}
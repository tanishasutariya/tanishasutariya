#include<stdio.h>
#include<conio.h>

main()
{
	  int n,a=1,mul=1;
	  clrscr();
	  printf("Enter any number : ");
	  scanf("%d",&n);
	  while (n>=a)
	  {
	    mul*=a;
	    a++;
	  }
	  printf("multiplication : %d",mul);
	  getch();
}
#include<stdio.h>
#include<conio.h>

main()
{
	  char a,b;
	  clrscr();
	  for(a='A';a<='E';a++)
	  {
	    for(b=a;b>='A';b--)
	    {
	      printf("%c",b);
	    }
	    printf("\n");
	  }
	  getch();
}
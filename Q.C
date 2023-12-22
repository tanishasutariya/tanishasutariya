#include<stdio.h>
#include<conio.h>

main()
{
		int i,j;
		clrscr();
		for(i=1;i<=6;i++)
		{
		  for(j=1;j<=6;j++)
		  {
		    if(
		    (i==1 && (j>=2 && j<=4))||
		    ((j==1 || j==5) && (i>=2 && i<=4))||
		    (i==5 && (j>=2 && j<=5))||
		    (i>=3 && i==j)
		    )
		    {
		      printf("* ");
		    }
		    else
		    {
		      printf("  ");
		    }
		  }
		  printf("\n");
		}
		getch();
}

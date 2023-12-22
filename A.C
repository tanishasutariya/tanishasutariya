#include<stdio.h>
#include<conio.h>

main()
{
		 int i,j;
		 clrscr();
		 for(i=1;i<=6;i++)
		 {
		   for(j=1;j<=11;j++)
		   {
		     if(
		       (i==1 && (j==6))||
		       (i==2 && (j==5 || j==6))||
		       (i==3 && (j==4 || j==7))||
		       (i==4 && (j>=3 && j<=6))||
		       (i==5 && (j==2 || j==9))||
		       (i==6 && (j==1 || j==10))
		       )
		     {
		       printf("* ");
		     }
		     else
		     {
		       printf(" ");
		     }
		   }
		   printf("\n");
		 }
		 getch();
}
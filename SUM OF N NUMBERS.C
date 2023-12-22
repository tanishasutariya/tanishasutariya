#include<stdio.h>
#include<conio.h>

main()
{
	 int n,a=1,sum=0;
	 clrscr();
	 printf("Enter any number : ");
	 scanf("%d",&n);
	 while (n>=a)
	 {
	   sum=sum+a;
	   a++;
	 }
	 printf("sum : %d",sum);
	 getch();

}
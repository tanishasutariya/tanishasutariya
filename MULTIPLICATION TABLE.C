#include<stdio.h>
#include<conio.h>

main()
{
       int n,a=1;
       clrscr();
       printf("Enter any number : ");
       scanf("%d",&n);
       label :
       if(a<=10)
       {
       printf("%d x %d = %d\n",n,a,n*a);
       a++;
       goto label;
       }
       getch();
}
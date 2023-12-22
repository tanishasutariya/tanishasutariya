#include<stdio.h>
#include<conio.h>

main()
{
	int=n,rem,armstrong;
	clrscr();
	printf("Enter any number : ");
	scanf("%d",&n);
	armstrong=rem;
	while (n!=0)
	{
	  rem=n%10;
	  rem=rem*rem*rem;
	  n=n/10;
	}
	if (armstrong==rem)
	{
	  printf("This is armstrong number");
	}
	else
	{
	  printf("This is not armstrong number");
	}
	getch();
}

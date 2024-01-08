//Q-1
#include<stdio.h>

void divisible(int n)
{
     if(n%3==0&&n%5==0)
     printf("The given number is divisible by both 3&5.");
     else     
     printf("The given number is NOT divisible by both 3&5.");     
}

int main()
{
     int n;
     printf("Enter n:");
     scanf("%d",&n);
     divisible(n);
     
     return 0;
}

//Q-2
#include<stdio.h>

void cube(int n)
{
     printf("cube is:%d",n*n*n);     
}

int main()
{
     int n;
     printf("Enter n:");
     scanf("%d",&n);
     cube(n);

     return 0;
}
#include<stdio.h>
#include"my functions.c"



/* scale of pointer*/


void main()
{

int i,n;
n=getArrayLength();

int a[n];
int*ptr;
ptr=&a;

for(i=0;i<n;i++)
{
	printf("enter a[%d]:",i);
    scanf("%d,ptr+i");
}

for(i=0;i<n;i++)
{
	printf("a[%d]:%d\n",i,*(ptr+i));
    
}
}

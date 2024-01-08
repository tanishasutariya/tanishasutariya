//Q.1 Write a Program to check whether a string is a palindrome or not without using string functions.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,len,flag;
	flag=0;
	
	printf("Enter any string : ");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Given string is a Palindrome.");
	}
	else
	{
		printf("Given string is not a Palindrome.");
	}
	return 0;
}

//Q.2 Write a Program to count the frequency of each character in a given string
#include<stdio.h>
#include<string.h>
int main()
{
	char str[500];
	int i,j,k;
	printf("Enter any string : ");
	scanf("%s",&str);
	printf("Frequency of each letter:\n");
	for(i=0;str[i];i++)
	{
		k=1;
		for(j=i+1;str[j];j++)
		{
			if(str[i]==str[j])
			{
				k++;
				str[j]='*'; //repeat charat 
			}
		}
		printf("\n%c = %d times",str[i],k);
	}
	return 0;
}
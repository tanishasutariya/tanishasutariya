//Q.1 Write a Program to find all the negative elements from a given 1D array.
#include<stdio.h>
void main()
{
int i,n;
	int array[n];
	printf("Enter size of Array :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("array[%d] : ",i);
		scanf("%d",&array[i]);
	}
	printf("Negative elements from an Array :");
	for(i=0;i<n;i++)
	{
		if(array[i]<0)
		{
		printf(" %d ,",array[i]);
		}
	}
	
}


//Q.2 Write a Program to find the largest element from a given 2D array.
#include<stdio.h>
void main()
{
	int r,c;
	printf("Enter row size:");
	scanf("%d",&r);
	printf("Enter column size:");
	scanf("%d",&c);
	int array[r][c],max=0;
	//input array elements
	int i,j;
	printf("Enter the elements :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(array[i][j]>max)
			{
				max=array[i][j];
			}
		}
	}
	printf("largest number is : %d",max);

}


//Q.3 Write a Program to find the transpose matrix of a given 2D array.
#include<stdio.h>
void main()
{
	int r,c;
	printf("Enter row size:");
	scanf("%d",&r);
	printf("Enter column size:");
	scanf("%d",&c);
	int array[r][c];
	//input array elements
	int i,j;
	printf("Enter the elements :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	//printing matrix 
	printf("Entered elements in matrix  :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	int array2[c][r];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			array2[i][j]=array[j][i];
		}
	}
	printf("transpose matrix of a given 2D array :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ", array2[i][j]);
		}
		printf("\n");
	}
	
}
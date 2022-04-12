#include <stdio.h>

int func(int arr[][3],int r, int i, int j, int count) 
{
	static int counter=0;
	if (arr[i][j]==1)
	{
		counter++;
	}
	if (i==r-1 && j==3-1) //base case
	{
		return counter;
	}
	else
	{
		if (count==2)
		{
			j=0;
			count=0;
			return func(arr,r,i+1,j,count);
		}
		else
		{
			count++;
			return func(arr,r,i,j+1,count);
		}
	}
}
void main()
{
	int i,j,r,c;
	printf("Enter rows of your matrix\n");
	scanf("%d",&r);
	int arr[r][3];
	printf("Enter values\n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<3;++j)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int count=0;
	i=0;j=0;
	int x=func(arr,r,i,j,count);
	printf("Number of 1's are %d",x);
}

#include <stdio.h>

void main()
{
	
	int arr[100],i,m;
	for (i=0;i<100;i++)
	{
		arr[i]=i+1;
	}
	for (i=1;i<100;i++)
	{
		for (m=i+1;m<100;m++)
		{
			if (arr[i]!=0 && arr[m]!=0)
			{
				if (arr[m]%arr[i]==0)
				{
					arr[m]=0;
				}
			}
		}
	}
	printf("PRIME NUMBERS ARE:\n\n\n");
	for (i=0;i<100;i++)
	{
		if (arr[i]!=0)
		{
			printf("%d\t",arr[i]);
		}
	}
}

#include <stdio.h>
#include <conio.h>

void main()
{
	int i,j;
	for (i=1;i<=14;i++)
	{
		printf("\n");
		for (j=1;j<=9;j++)
		{
			if (i==1 && j==5)
			{printf("*");
			}
			else if (i==2 && j==4)
			printf("***");
			else if(i==3 && j==5)
			printf("*");
			else if (i==4 && j==4)
			printf("***");
			else if( i==5 && j==3)
			printf("*****");
			else if ( i==6 && j==5)
			printf("*");
			else if ( i==7 && j==4)
			printf("***");
			else if (i==8 && j==3)
			printf("*****");
			else if ( i==9 & j==2)
			printf("*******");
			else if (i==10 && j==5)
			printf("*");
			else if (i==11 && j==4)
			printf("***");
			else if (i==12 && j==3)
			printf("*****");
			else if (i==13 && j==2)
			printf("*******");
			else if (i==14 && j==1)
			printf("*********");
			printf(" ");
		}
	}
}

#include <stdio.h>
#include <conio.h>

void main()
{
	int total,gall,acc[100];
	
	printf("Enter account number: ");
	scanf("%d",&acc[100]);
	printf("Enter amount in gallons: ");
	scanf("%d",&gall);
	char ch;
	printf("Enter User code: ");
	scanf(" %c",&ch);
	
	
	
	
	if (ch=='H')
	{
		total=gall*500;
		printf("The amount due is= %d",total);
		
	}
	else if (ch=='C')
	{
		if (gall<=1000)
		{
			total=1000;
			printf("The amount due is= Rs %d",total);
		}
		else
		{
			total=1000+((gall-1000)*250);
			printf("The amount due is= Rs.%d",total);
		}
	}
	else if (ch=='I')
	{
		if (gall<=500)
		{
			total=1000;
			printf("The amount due is= Rs. %d",total);
		}
		else if(gall>500 && gall<=2500)
		{
			total=2000;
			printf("The amount due is= Rs. %d",total);
		}
		else
		{
			total=3000;
			printf("The amount due is= Rs. %d",total);
		}
	}
	else
	printf("Enter valid code: ");

	
	
		
	
}

#include <stdio.h>
#include <conio.h>
#include <string.h>

struct NIC{
	char first_part[5];
	char second_part[7];
	int last_part;
};

void main()
{
	int i;
	struct NIC n[3];
	for (i=0;i<3;i++)
	{
		printf("Enter first part of NIC of person %d\n",i+1);
		fflush(stdin);
		gets(n[i].first_part);
		printf("Enter second part of NIC of person %d\n",i+1);
		fflush(stdin);
		gets(n[i].second_part);
		printf("Enter last part of NIC of person %d\n",i+1);
		scanf("%d",&n[i].last_part);	
	}
	system("CLS");
	for (i=0;i<3;i++)
	{
		if (n[i].last_part%2==0)
		{
			printf("Person %d is female\n",i+1);
		}
		else
		{
			printf("Person %d is male\n",i+1);
		}
	}
	
}

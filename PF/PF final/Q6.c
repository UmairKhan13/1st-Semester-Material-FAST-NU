#include <stdio.h>
#include <string.h>

void sort(char **ptr)
{
	char *token;
	char array[6][20];
	int i=0,count=0,count2=0;
	A:
		
		token=strtok(*ptr," ");
		while (token!=NULL)
		{
			if (strcmp(token,"one")==0)
			{
				if (count==0)
				{
					count++;
					strcpy(array[0],ptr[i]);
				}
				else
				{
					strcpy(array[1],ptr[i]);
				}
			}
			else if (strcmp(token,"two")==0)
			{
				strcpy(array[2],ptr[i]);
			}
			else if (strcmp(token,"three")==0)
			{
				if (count2==0)
				{
					count2++;
					strcpy(array[3],ptr[i]);
				}
				else
				{
					strcpy(array[4],ptr[i]);
				}
			}
			else
			{
				strcpy(array[5],ptr[i]);
			}
		}
		if (i<=5)
		{
			i++;
			goto A;
		}
		for (i=0;i<5;i++)
		{
			puts(array[i]);
		}
}
void main()
{
	char *ptr[][20]={"This is line one","This is line one again","We have two apples","There are three bikes","There are also three cars","I have got nothing"};
	sort(ptr);
}

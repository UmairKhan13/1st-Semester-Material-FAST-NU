#include <stdio.h>
#include <stdlib.h>
void main()
{
	int seats[10]={0,0,0,0,0,0,0,0,0,0};
	int n,n1;
	int i=0,j=0,k=0,m=5;
	repeat:
		printf("\n\nPress 1 to book a seat in first-class:\nPress 2 to book a seat in economy class:\n");
		scanf("%d",&n);
		if (n==1)
		{
			
			while (i<10)
			{
				if (seats[i]==0 && i<5)
				{
					seats[i]=1;
					printf("Your seat number is %d in First-class\n",i+1);
					i++;
					goto repeat;
				}
				else if (seats[i]==0 && i>=5)
				{
					printf("The seats in First class are full, press 1 to book a seat in Economy class or 0 to exit:\n");
					scanf("%d",&n1);
					if (n1==0)
					{
						printf("The next flight leaves in 3 hours.\n");
						break;
					}
					if (n1==1)
					{
						int *ptr=&seats[0];
						*(ptr + i)=1;
						printf("Your seat number is %d in Economy class.\n",i+1);
						i++;
						goto repeat;
					
					}
				}
				i++;
			}
		}
		if (n==2)
		{
			while (j<10)
			{
				if (seats[m]==0 && m<10)
				{
					seats[m]=1;
					printf("Your seat number is %d in Economy class",m+1);
					m++;j++;
					goto repeat;
				}
				
				else if (seats[k]==0 && k<5)
				{
					printf("The seats in Economy class are full\nPress 1 to book a seat in first class or 0 to exit\n");
					scanf("%d",&n1);
					if (n1==0)
					{
						printf("The next flight leaves in 3 hours\n");
						break;
					}
					if (n1==1)
					{
						int *ptr2=&seats[0];
						*(ptr2 + k)=1;
						printf("Your seat number is %d in First class\n",k+1);
						k++;j++;
						goto repeat;
					}
				}
				m++;
				j++;
			}
		}
	
	
}



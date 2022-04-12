#include <stdio.h>

void main()
{
	int mat[][5]={{1,192,48,206,37},
					{2,147,90,312,21},
					{3,186,12,121,38},
					{4,114,21,408,39},
					{5,267,13,382,29}};
	int i,j,t_votes=0,g_total=0,k=0;
	char ch='A';
	int percent,rate[4];
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			g_total+=mat[i][j];
		}
	}
	for(i=1;i<5;i++,k++)
	{
		percent=0;
		t_votes=0;
		for (j=0;j<5;j++)
		{
			t_votes+=mat[j][i];
		}
		printf("Candidate %c received %d votes out of %d votes\n",ch,t_votes,g_total);
		ch++;
		percent=(t_votes/g_total)*100;
		printf("The percentage of the votes is %d\n\n",percent);
		rate[k]=percent;
		
	}
}

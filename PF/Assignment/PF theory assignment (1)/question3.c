#include <stdio.h>
#include <conio.h>

void main()
{
	float rate1,rate2,rate3,rate4,toll1,toll2,toll3,toll4;
	float bill2,bill3,bill4,total1,total2,total3,total4,dist;
	printf("Enter the distance covered (in kilometres): ");
	scanf("%f",&dist);
	
	
	rate1=50.5*dist;
	toll1=rate1*0.1;
	total1=rate1+toll1;
	
	rate2=90.9*(dist-50);
	total2=rate1+rate2;
	toll2=total2*0.1;
	bill2=toll2+total2;
	
	rate3=110*(dist-150);
	total3=rate1+rate2;
	toll3=total3*0.1;
	bill3=toll3+total3;
	
	rate4=150.5*(dist-250);
	total4=rate1+rate2+rate3+rate4;
	toll4=total4*0.1;
	bill4=toll4+total4;
	
		
	
	if (dist<=50)
	{
		
		printf("The total bill is = %.2f$",total1);
	}
	else if (dist>50 && dist<=150)
	{
		
		printf("The total bill is = %.2f$",bill2);
	}
	else if(dist>150 && dist<=250)
	{
		printf("The total bill is= %.2f$",bill3);
	}
	else 
	printf("The total bill is = %.2f$",bill4);
}

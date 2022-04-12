#include <stdio.h>
#include <math.h>
#include <conio.h>

void main()
{
	double d1,d2,x1,y1,x2,y2,x3,y3;
	x1=56.034;
	y1=22.089;
	printf("Enter x and y components of point B ");
	scanf("%lf\n%lf",&x2,&y2);
	printf("Enter x and y components of point C ");
	scanf("%lf\n%lf",&x3,&y3);
	
	d1=sqrt(pow(x2-x1,2)+pow(y2-y1,2)); //Distance of A to B
	d2=sqrt(pow(x3-x1,2)+pow(y3-y1,2)); //Distance of A to C
	if (d1>d2)
	printf("A is closer to C");
	else 
	printf("A is closer to B");
}

#include<stdio.h>
int su(int x,int y,int z,int a,float distance,int num,int den){
	float sum = num/den;
	return sum;
}
int denom(int x,int y,int z,int a,float distance,int num){
	if(distance>0){
		return distance;
	} else {
		int denominator = x+y;
		float distance = su(x,y,z,a,distance,num,denominator);
		denom(x,y,z,a,distance,num);
	}
}
int numer(int x,int y,int z,int a,float distance){
	if(distance>0){
		return distance;
	} else {
		int numerator = z *a ;
		float distance = denom(x,y,z,a,distance,numerator);
		numer(x,y,z,a,distance);
	}
}
int result(int x,int y,int z,int a,float distance){
	
	if(distance > 0){
		return distance;
	} else  {
		float distance =  numer(x,y,z,a,distance);
		result(x,y,z,a,distance);
	}
	
}
int main(){
	int train1;
	printf("Enter speed of train 1.");
	scanf("%d",&train1);
	int train2;
	printf("Enter speed of train 2.");
	scanf("%d",&train2);
	int honeyBee;
	printf("Enter speed of honey bee.");
	scanf("%d",&honeyBee);
	int collision;
	printf("Enter the distance between trains.");
	scanf("%d",&collision);
	float distance = 0;
	distance = result(train1,train2,honeyBee,collision,0);
	printf("Distance travelled by bee: %f",distance);
}

#include<stdio.h>

int main() {
	int districts[5][3]={{33,3,159},{234,122,351},{100,140,19},{53,310,76},{111,2,4}};
	int customers[5];
	int i,j,sum,maxDistrict,minDistrict,maxBranch;
	for(i=0;i<5;i++){
		sum=0;
		for(j=0;j<3;j++){
			sum += districts[i][j];
		}
		customers[i]=sum;
	}
	int max=customers[0];
	int min=customers[0];
	for(i=0;i<5;i++){
		if(customers[i]>max){
			max=customers[i];
			maxDistrict = i+1;
		}
	}
	for(i=0;i<5;i++){
		if(customers[i]<min){
			min = customers[i];
			minDistrict = i+1;
		}
	}
	printf("The district with the most profit is District %d. \n",maxDistrict);
	printf("The district with the least profit is District %d. \n",minDistrict);
	for(i=0;i<5;i++){
		printf("Total Customers in District %d: %d \n",i+1,customers[i]);
	}
	int difference[3];
	int cap[3]={300*5,500*5,200*5};
	for(i=0;i<3;i++){
		difference[i]= cap[i] - customers[i];
	}
	int maxB = difference[0];
	for(i=0;i<3;i++){
		if(difference[i]<maxB){
			maxB = difference[i];
			maxBranch = i+1;
		}
	}
	printf("The most used branch is %d \n",maxBranch);
}

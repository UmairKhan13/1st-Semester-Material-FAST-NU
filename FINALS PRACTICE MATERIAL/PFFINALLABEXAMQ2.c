#include<stdio.h>

int main(){
	long long int nic,mid;
	int NIC[13],i,MID[7],sum=0,j;
	printf("Enter your nic number without spaces: ");
	scanf("%lld",&nic);
	for(i=12;i>=0;i--){
		int x = nic%10;
		NIC[i]=x;
		nic /= 10;
	}
	printf("Enter the middle part: ");
	scanf("%lld",&mid);
	for(i=6;i>=0;i--){
		int y = mid%10;
		MID[i]=y;
		mid /= 10;
	}
	for(i=0;i<7;i++){
		sum+= MID[i];
	}
	int rows=sum/3;
	printf("Digits sum divided by 3 is: %d \n",rows);
	printf("Now the diagonal printing of NIC is: \n");
	for(i=0;i<rows;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		printf("%d",NIC[i]);
		printf("\n");
	}
	
}

#include<stdio.h>

int main() {
	int arr[3] = {154368,621594,123456};
	calculation(arr);
}
int calculation(int *ptr){
	int temp,i,sum=0;
	for(i=0;i<3;i++){
		sum=0;
		while(ptr[i]!=0){
			temp = ptr[i] %10;
			sum+=temp;
			printf("Digit : %d \n",temp);
			ptr[i] = ptr[i]/10;
		}
		if(sum % 9 ==0){
			printf("The number is divisible by 9.\n",ptr[i]);
		} else  {
			printf("The number is not divisible by 9.\n",ptr[i]);
		}
	}
}

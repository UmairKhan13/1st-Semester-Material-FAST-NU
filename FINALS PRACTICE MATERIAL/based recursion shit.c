#include<stdio.h>

int recursion(int *arr,int size,int i,int sumOdd,int sumEven){
	if(size=1){
		printf("Sum of odd indexes: %d",sumOdd);
		printf("Sum of even indexed: %d",sumEven);
		return;
	}else {
		if(i+1%2 != 0){
			printf("%d",arr[i]);
			sumOdd += recursion(arr,size--,i++,sumOdd,sumEven);
			return sumOdd;
		} else {
			sumEven +=recursion(arr,size--,i++,sumOdd,sumEven);
			return sumEven;
		}
		
	}
}
int main(){
	int size =10;
	int price[10]={100,200,300,400,500,600,700,800,900,1000};
	recursion(price,10,0,0,0);
}

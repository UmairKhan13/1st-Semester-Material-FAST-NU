#include<stdio.h>

int main() {
	int number;
	printf("Enter the number: ");
	scanf("%d",&number);
	int x = checkPrime(number,number/2);
	if(x==1){
		printf("PRIME YEET");
	}else {
		printf("STFU");
	}
}
int checkPrime(int num,int i){
	if(i==1){
		return 1;
	} else if(num%i==0){
		return 0;
	} else {
		i--;
		checkPrime(num,i);
	}
}

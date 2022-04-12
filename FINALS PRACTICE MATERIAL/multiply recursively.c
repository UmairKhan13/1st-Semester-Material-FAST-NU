#include<stdio.h>
int exponent(int num,int pow){
	if(pow == 0){
		return 1;
	} else {
		return num * exponent(num,pow-1);
	}
}
int main(){
	int number;
	int power;
	printf("Enter number: ");
	scanf("%d",&number);
	printf("Enter power: ");
	scanf("%d",&power);
	int result = exponent(number,power);
	printf("RESULT: %d",result);
}

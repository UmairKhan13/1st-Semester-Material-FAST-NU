#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter num1: ");
	scanf("%d",&num1);
	printf("Enter num2: ");
	scanf("%d",&num2);
	int gcd= GCD(num1,num2);
	printf("GCD = %d",gcd);
}
int GCD(int n1,int n2){
	while(n1!=n2){
		if(n1>n2){
			return GCD(n1-n2,n2);
		} else {
			return GCD(n1,n2-n1);
		}
	}
	return n1;
}

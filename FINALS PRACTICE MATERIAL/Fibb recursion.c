#include<stdio.h>

int main(){
	int num;
	printf("Enter the number of terms uwu: ");
	scanf("%d",&num);
	int x= fibbionaci(num);
	printf("%d",x);
}
int fibbionaci(int n){
	if(n==1 || n==0){
		return n;
	} else {
		return fibbionaci(n-1) + fibbionaci(n-2);
	}
}

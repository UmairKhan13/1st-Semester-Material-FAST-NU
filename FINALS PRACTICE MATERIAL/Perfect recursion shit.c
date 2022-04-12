#include<stdio.h>

int main(){
	int number,sum=0;
	printf("Enter the number: ");
	scanf("%d",&number);
	int i= number-1;
	checkPerfect(number,i,&sum);
	if(sum==number){
		printf("PERFECT!");
	} else  {
		printf("LMAO NO");
	}
}
int checkPerfect(int num,int duh,int *s){
	if(duh == 0){
		return;
	} else if(num%duh==0){
		*s += duh;
		duh--;
		checkPerfect(num,duh,s);
	} else {
		duh--;
		checkPerfect(num,duh,s);
	}
}

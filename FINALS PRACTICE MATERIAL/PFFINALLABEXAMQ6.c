#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
int Jeet_Ki_Baazi(int *ptr,int *sumA,int *sumB){
	int attempts = 6;
	int choice;
	while(attempts != 0){
		if(attempts%2 == 0){
			printf("Player A: ");
			scanf("%d",&choice);
			if(ptr[choice-1]!=0){
				*sumA += ptr[choice-1];
				attempts--;
				ptr[choice-1] = 0;
			} else {
				printf("The box %d is already taken. \n",choice);
			}
		} else if (attempts%2 != 0){
			printf("Player B: ");
			scanf("%d",&choice);
			if(ptr[choice-1]!=0){
				*sumB += ptr[choice-1];
				attempts--;
				ptr[choice-1] = 0;
			} else {
				printf("The box %d is already taken. \n",choice);
			}
		} else {
			return;
		}
	}
}
int main(){
	int i,sumA=0,sumB=0;
	srand(time(0));
	int *ptr;
	ptr=(int *)calloc(6,sizeof(int));
	for(i=0;i<6;i++){
		ptr[i]=rand();
	}
	Jeet_Ki_Baazi(ptr,&sumA,&sumB);
	if(sumA>sumB){
		printf("Player A Wins. Congratulations on your well deserved success.");
	} else {
		printf("Player B Wins. Congratulations on your well deserved success.");
	}
}

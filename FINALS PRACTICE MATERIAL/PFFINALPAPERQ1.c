#include<stdio.h>
int main() {
	int type,totalCost=0,bQuan,cQuan;
	char choice,choice1;
	printf("\t\t\t\t\tPIE IN THE SKY BAKERS\n");
	printf("\t\t\t\t\t\tWELCOME\n");
	printf("PLEASE SELECT FROM THE FOLLOWING MENU \nC = CAKE\nB = BISCUITS\n");
	printf("HOW MANY TYPES OF ITEMS DO YOU WANT TO ORDER: ");
	scanf("%d",&type);
	switch(type){
		case 1:
			printf("Enter first item you want to order: ");
			scanf(" %c",&choice);
			if(choice == 'B'){
				printf("Enter quantity: ");
				scanf("%d",&bQuan);
			} else {
				printf("Enter quantity: ");
				scanf("%d",&cQuan);
			}
			break;
		case 2:
			printf("Enter first item you want to order: ");
			scanf(" %c",&choice);
			if(choice == 'B'){
				printf("Enter quantity: ");
				scanf("%d",&bQuan);
			} else {
				printf("Enter quantity: ");
				scanf("%d",&cQuan);
			}
			fflush(stdin);
			printf("Enter second item you want to order: ");
			scanf(" %c",&choice1);
			if(choice1 == 'B'){
				printf("Enter quantity: ");
				scanf("%d",&bQuan);
			} else {
				printf("Enter quantity: ");
				scanf("%d",&cQuan);
			}
			break;
		default:
			printf("Item unavailaible.\n");
			break;
	}
	totalCost = bQuan * 200 + cQuan * 500;
	printf("--------------------------------------------------------- \n");
	printf("You have ordered\n");
	if(type == 1 && choice == 'C'){
		printf("%d Cakes\t = %d",cQuan,cQuan*500);
	} else if(type == 1 && choice == 'B'){
		printf("%d Biscuits\t = %d",bQuan,bQuan*200);
	} else {
		printf("%d Cakes\t = %d \n",cQuan,cQuan*500);
		printf("%d Biscuits = %d \n",bQuan,bQuan*200);
	}
	printf("\t TOTAL = %d\n",totalCost);
	printf("\n \t\t\t\t Thank you have a nice day.");
	
}

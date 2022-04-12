#include<stdio.h>
int get_info(int price);
typedef struct{
	char name[20];
	double price;
	int quantity;
}inventory;
	inventory items[8]={{"abc",10.00,10},
						{"bcd",15.00,20},
						{"cde",30.00,30},
						{"def",50.00,50},
						{"efg",70.00,60},
						{"fgh",90.00,70},
						{"ghi",110.00,80},
						{"hij",150.00,90}
						};
int main() {
	int i,customerBudget;
	char choice[20];
	printf("How much money are you planning to spend: ");
	scanf("%d",&customerBudget);
	if(customerBudget<20){
		printf("Notion: Cheap \n");
	} else if(customerBudget>20 && customerBudget<100){
		printf("Notion: Moderate \n");
	} else {
		printf("Notion: Expensive \n");
	}
	get_info(customerBudget);
	printf("What item you like to buy: ");
	scanf("%s",choice);
	for(i=0;i<8;i++){
		if(items[i].name == choice){
			printf("Your Bill:  %lf",items[i].price);
		}
	}
}
int get_info(int price){
	int i;
	if(price<20){
		printf("Cheap items:  \n");
		for(i=0;i<8;i++){
			if(items[i].price<20){
				printf(" Item:%d \n",i+1);
				printf("  Name: %s \n",items[i].name);
				printf("  Price: %lf \n",items[i].price);
				printf("  Quantity: %d \n",items[i].quantity);
			}
		}
	}
	if(price>20 && price <100){
		printf("Moderate items:  \n");
		for(i=0;i<8;i++){
			if(items[i].price>20 && items[i].price<100){
				printf(" Item:%d \n",i+1);
				printf("  Name: %s \n",items[i].name);
				printf("  Price: %lf \n",items[i].price);
				printf("  Quantity: %d \n",items[i].quantity);
			}
		}
	}
	if(price>100){
		printf("Expensive items:  \n");
		for(i=0;i<8;i++){
			if(items[i].price>100){
				printf(" Item:%d \n",i+1);
				printf("  Name: %s \n",items[i].name);
				printf("  Price: %lf \n",items[i].price);
				printf("  Quantity: %d \n",items[i].quantity);
			}
		}
	}
}

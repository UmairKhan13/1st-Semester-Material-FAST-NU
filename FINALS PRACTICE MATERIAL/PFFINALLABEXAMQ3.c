#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct{
	char streetAddress[10];
	char city[10];
	char state[10];
}ADDRESS;
typedef struct{
	int customerID;
	char customerName[20];
	ADDRESS address;
}CUSTOMER;
typedef struct{
	int productID;
	char productName[20];
	int productQuantity;
}PRODUCT;
int main(){
	int n,i;
	FILE *fptr;
	printf("How many customers do you want to add: ");
	scanf("%d",&n);
	CUSTOMER customer[n];
	fptr=fopen("customer_details.txt","w");
	if(fptr == NULL){
		printf("File could not be created.");
		exit(0);
	}
	for(i=0;i<n;i++){
		printf("Enter customer ID: ");
		scanf("%d",&customer[i].customerID);
		fflush(stdin);
		printf("Enter customer name: ");
		gets(customer[i].customerName);
		printf("Enter street Address: ");
		gets(customer[i].address.streetAddress);
		printf("Enter city: ");
		gets(customer[i].address.city);
		printf("Enter state: ");
		gets(customer[i].address.state);
		fprintf(fptr,"Customer ID: %d \t Customer Name: %s\t Street: %s\t City: %s\t State: %s",customer[i].customerID
		,customer[i].customerName,customer[i].address.streetAddress,customer[i].address.city,customer[i].address.state);
	}
	fclose(fptr);
	PRODUCT product;
	fptr=fopen("Product_details.txt","w");
	if(fptr == NULL) {
		printf("File could not be created.");
		exit(0);
	}
	do{
		fflush(stdin);
		printf("Enter product ID: ");
		scanf("%d",&product.productID);
		fflush(stdin);
		printf("Enter product Name: ");
		gets(product.productName);
		fflush(stdin);
		printf("Enter quantity: ");
		scanf("%d",&product.productQuantity);
		fprintf(fptr,"Product ID: %d\t Product Name: %s\t Quantity: %d",product.productID,product.productName,product.productQuantity);
	} while(!feof(stdin));
	fclose(fptr);
	printf("What would you like to do: \n");
	printf("1.list out all the maintained items.\n");
	printf("2.list out only those items whose quantity is zero.\n");
	printf("3.list only those items whose quantity is greater than 50.\n");
	int choice;
	scanf("%d",&choice);
	fptr= fopen("Product_details.txt","r");
	while(!feof(fptr)){
		fscanf(fptr,"Product ID: %d\t Product Name: %s\t Quantity: %d",&product.productID,product.productName,&product.productQuantity);
		switch(choice){
			case 1:
				printf("Product ID: %d\t Product Name: %s\t Quantity: %d \n",product.productID,product.productName,product.productQuantity);
				break;
			case 2:
				if(product.productQuantity == 0){
					printf("Product ID: %d\t Product Name: %s\t Quantity: %d \n",product.productID,product.productName,product.productQuantity);
				}
				break;
			case 3:
				if(product.productQuantity>50){
					printf("Product ID: %d\t Product Name: %s\t Quantity: %d \n",product.productID,product.productName,product.productQuantity);
				}
				break;
				
		}
		
	}
	fclose(fptr);
	
}

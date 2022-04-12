#include<stdio.h>
typedef struct{
	char item[10][20];
	double price[10];
}store;
int main() {
	int i;
	store stores[4];
	FILE *fptr;
	fptr = fopen("store1.txt","r");
	
	while(1){
		char word;
		if(word == EOF){
			break;
		}
		for(i=1;i<=10;i++){
			fscanf(fptr,"%s,%lf",stores[i].item[i],stores[i].price[i]);	
		}
		
		word=getc(fptr);
	}
	fclose(fptr);
	
	for(i=1;i<=10;i++){
		printf("%s %lf",stores[i].item[i],stores[i].price[i]);
	}
	
	
}

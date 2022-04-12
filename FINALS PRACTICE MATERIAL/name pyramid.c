#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
	int i,j,k=0;
	char *ptr;
	ptr=(char*)malloc(20*sizeof(char));
	gets(ptr);
	for(i=0;i<=strlen(ptr);i++){
		for(j = strlen(ptr)-i; j > 0; j--)
        {
            printf(" ");
        }
        k=0;
		for(j=0;j<i;j++){
			printf("%c ",ptr[k]);
			k++;
		}      
		printf("\n");
	}
}

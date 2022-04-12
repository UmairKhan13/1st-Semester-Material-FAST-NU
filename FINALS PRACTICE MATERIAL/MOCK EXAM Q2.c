#include<stdio.h>
#include<string.h>

int main() {
	char string[10];
	printf("Enter the binary value: ");
	gets(string);
	pattern_function(string);
}
int pattern_function(char *str){
	int i,j,temp=0;
	char x='A';
	for(i=1;i<=strlen(str);i++){
		for(j=1;j<i+1;j++){
			if(i%2 != 0){
				printf("%c \t",x);
			} else {
				if(temp==strlen(str)){
					temp = i;
				}
				printf("%c \t",str[temp]);
				temp++;
			}
		}
		printf("\n");
		x++;
	}
}

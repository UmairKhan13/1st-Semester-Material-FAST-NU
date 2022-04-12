#include<stdio.h>

int main(){
	FILE *fptr,*fptr1;
	char word;
	fptr = fopen("data.txt","r");
	fptr1 = fopen("data1.txt","w");
	while(1){
		word=getc(fptr);
		if(word == EOF){
			break;
		}
		word+=10;
		putc(word,fptr1);
	}
	fclose(fptr);
	fclose(fptr1);
	fptr = fopen("data1.txt","r");
	fptr1= fopen("data2.txt","w");
	while(1){
		word = getc(fptr);
		if(word==EOF){
			break;
		}
		word-=10;
		putc(word,fptr1);
	}
	fclose(fptr);
	fclose(fptr1);
}

#include<stdio.h>

int main() {
	char file[10],word;
	int word_count=1;
	int char_count=0;
	printf("Enter the name of file: ");
	gets(file);
	FILE *fptr;
	fptr = fopen(file,"r");
	while(1){
		word=getc(fptr);
		if(word == EOF){
			break;
		}
		
		if(word == ' ' || word == '\n'){
			word_count++;
		}
		if(word != ' ' && word != '\n'){
		char_count++;
		}
		
	}
	printf("Total words: %d",word_count);
	printf("Total characters: %d",char_count);
	
}

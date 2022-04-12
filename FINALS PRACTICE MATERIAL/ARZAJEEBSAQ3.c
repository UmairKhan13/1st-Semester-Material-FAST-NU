#include<stdio.h>
#include<string.h>

int main() {
	char temp[100];
	char string[100];
	gets(string);
	int i,j,k=0;
	if(string[i] == 'a' || string[i] == 'e'||string[i] == 'i'||string[i] == 'o'||string[i] == 'u'){
		strcat(string,"way");
	} else if(string[0]=='s' && string[1] == 'c' && string[2] == 'h'){
		j=0;
		for(i=3;i<strlen(string);i++){
			string[j]=string[i];
			j++;
		}
		string[j]='\0';
		strcat(string,"skay");
	} else {
		for(i=0;i<strlen(string);i++){
		if(string[i] == 'a' || string[i] == 'e'||string[i] == 'i'||string[i] == 'o'||string[i] == 'u'){
			j=i;
			while(j!=0){
				temp[k]=string[k];
				k++;
				j--;	
			}
		}
	}
	j=0;
	for(i=0;i<strlen(string);i++){
		if(string[i] == temp[i]){
			continue;
		} else {
			string[j]=string[i];
			j++;
		}
	}
	string[j] = '\0';
	strcat(string,temp);
	strcat(string,"ay");
	}
	puts(string);
}

#include<stdio.h>
#include<string.h>

int main() {
	int cases,i,j,k=0;
	printf("Enter the number of test cases: ");
	scanf("%d",&cases);
	int results[cases];
	unsigned int differences;
	char string1[cases][10];
	char string2[cases][10];
	for(i=0;i<cases;i++){
		printf("Enter strings: ");
		scanf("%s %s",string1[i],string2[i]);
	}
	for(i=0;i<cases;i++){
		for(j=0;j<strlen(string1[i]);j++){
			if(string1[i][j]=='a' ||string1[i][j]=='e' || string1[i][j]=='i' || string1[i][j]=='o'||string1[i][j]=='u'||string1[i][j]=='y'){
				continue;
			}else {
				string1[i][k]=string1[i][j];
				k++;
			}
		}
		string1[i][k]='\0';
		k=0;
	}
	for(i=0;i<cases;i++){
		for(j=0;j<strlen(string2[i]);j++){
			if(string2[i][j]=='a' ||string2[i][j]=='e' || string2[i][j]=='i' || string2[i][j]=='o'||string2[i][j]=='u'||string2[i][j]=='y'){
				continue;
			}else {
				string2[i][k]=string2[i][j];
				k++;
			}
		}
		string2[i][k]='\0';
		k=0;
	}
	for(i=0;i<cases;i++){
		differences=0;
		j=0;
		k=0;
		differences = strlen(string1[i]) - strlen(string2[i]);
		if(string1[i][j] != string2[i][k]){
			results[i]=0;
			break;
		} else {
			if(string1[i][j] == string2[i][k]){
				j++;
				k++;
				continue;
			} else {
				differences++;
				j++;
				k++;
			}
		}
		if(differences>2){
			results[i]=0;
		} else {
			results[i] = 1;
		}
	}
	for(i=0;i<cases;i++){
		if(results[i]==0){
			printf("NO \n");
		} else {
			printf("YES \n");
		}
	}
}

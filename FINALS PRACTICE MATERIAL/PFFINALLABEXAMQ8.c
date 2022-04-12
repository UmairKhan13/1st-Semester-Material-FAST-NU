#include<stdio.h>
void BUBBLE_SORT(char *fam,char *status){
	int i,j,k=0;
	char newFam[10][10];
	char *newF = newFam[0];
	int positions[4];
	for(i=0;i<10;i++){
		if(status[i] == 'P'){
			positions[k]=i;
			k++;
		}
	}
	for(i=0;i<10-1;i++){
		for(j=0;j<10-i-1;j++){
			if(status[j]<status[j+1]){
				
				char temp = status[j];
				status[j] = status[j+1];
				status[j+1] = temp;
				k++;
			}
		}
	}
	k=0;
	for(i=0;i<10;i++){
		if(i==positions[i]){
			newF[k]=fam[i];
			k++;
		}	
	}
	for(i=0;i<10;i++){
		if(i!=positions[i]){
			newF[k]=fam[i];
			k++;
		}
	}
	for(i=0;i<10;i++){
		printf("%c \t",status[i]);
	}
	printf("\n");
	for(i=0;i<10;i++){
		puts(fam[i]);
	}
}
int main(){
	char family[][10]={"Hina","Sara","Ali","Zain","Bakhtawar","Hashim","Zeeshan","Jameela","Asfa","Zahid"};
	char status[][1]={'P','N','P','P','N','P','N','N','N','N'};
	int i,j=0;
	
	BUBBLE_SORT(family,status);
}

#include<stdio.h>
#include<string.h>
int method_1(char *x,char *y);
int main() {
	int method1[6];
	char A[] = "gtggcaacgtgc";
	char B[] = "gtagcagcgcgc";
	char C[] = "gcggcacagggt";
	char D[] = "gtgacaacgtgc";
	method1[0] = method_1(A,B);
	method1[1] = method_1(A,C);
	method1[2] = method_1(A,D);
	method1[3] = method_1(B,C);
	method1[4] = method_1(B,D);
	method1[5] = method_1(C,D);
	int i,max=method1[0],min=method1[0],m1pos,m2pos;
	for(i=0;i<6;i++){
		if(max<method1[i]){
			max = method1[i];
			m1pos=i+1;
		}
		if(min>method1[i]){
			min = method1[i];
			m2pos= i+1;
		}
	}
	switch(m1pos){
		case 1:
			printf("A and B are the most varied.\n");
			break;
		case 2:
			printf("A and C are the most varied.\n");
			break;
		case 3:
			printf("A and D are the most varied.\n");
			break;
		case 4:
			printf("B and C are the most varied.\n");
			break;
		case 5:
			printf("B and D are the most varied.\n");
			break;
		case 6:
			printf("C and D are the most varied.\n");
			break;
		default:
			break;
	}
	switch(m2pos){
		case 1:
			printf("A and B are the least varied.\n");
			break;
		case 2:
			printf("A and C are the least varied.\n");
			break;
		case 3:
			printf("A and D are the least varied.\n");
			break;
		case 4:
			printf("B and C are the least varied.\n");
			break;
		case 5:
			printf("B and D are the least varied.\n");
			break;
		case 6:
			printf("C and D are the least varied.\n");
			break;
		default:
			break;
	}
}
int method_1(char *x,char *y){
	int i,difference=0;
	for(i=0;i<strlen(x);i++){
		if(x[i]!=y[i]){
			difference++;
		}
	}
	return difference;
}


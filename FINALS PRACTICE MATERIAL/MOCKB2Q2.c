#include<stdio.h>
#include<stdlib.h>
int main() {
	int cases,i,n,j,k,freq[100],count,max,pos=0;
	int *ptr;
	printf("Enter the number of test cases: ");
	scanf("%d",&cases);
	int results[cases];
	for(i=0;i<cases;i++){
		printf("Enter the number of integers: ");
		scanf("%d",&n);
		ptr=(int *)calloc(n,sizeof(int));
		for(j=0;j<n;j++){
			scanf("%d",&ptr[j]);
			freq[j] = -1;
		}
		for(j=0;j<n;j++){
			count=1;
			for(k=j+1;k<n;k++){
				if(ptr[j] == ptr[k]){
					count++;
					freq[k]=0;
				}
			}
			if(freq[j] != 0){
				freq[j] = count;
			}
		}
		max = freq[0];
		for(j=0;j<n;j++){
			if(freq[j] != 0){
				if(max<=freq[j]){
					max = freq[j];
					pos=j;
				}
			}
		}
		printf("RESULT: %d \n",ptr[pos]);
		
	}
}

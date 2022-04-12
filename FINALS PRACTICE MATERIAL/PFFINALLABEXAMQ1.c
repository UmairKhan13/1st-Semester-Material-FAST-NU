#include<stdio.h>
int bruh(double *ptr1,double *ptr2,int x,int y){
	int merge = x+y;
	double mergedZamasu[merge];
	int i,j=0;
	double temp;
	for(i=0;i<x;i++){
		mergedZamasu[j]=ptr1[i];
		j++;
		
	}
	for(i=0;i<y;i++){
		mergedZamasu[j]=ptr2[i];
		j++;
	}
	mergedZamasu[j] = '\0';
	
	
		for(i=0;i<merge-1;i++){
		for(j=0;j<merge-i-1;j++){
			if(mergedZamasu[j]>mergedZamasu[j+1]){
				temp = mergedZamasu[j];
				mergedZamasu[j]=mergedZamasu[j+1];
				mergedZamasu[j+1] = temp;
			}
		}
	}
	int k=0;
	for(i=0;i<merge;i++){
		if(mergedZamasu[i] == mergedZamasu[i+1]){
			continue;
		} else {
			mergedZamasu[k] = mergedZamasu[i];
			k++;
		}
	}
	mergedZamasu[k]='\0';

	for(i=0;i<k;i++){
		printf("%lf \t",mergedZamasu[i]);
	}
}
int main() {
	int n1,n2,i;
	printf("Enter the size of first array: ");
	scanf("%d",&n1);
	double arr1[n1];
	printf("Enter the elements: ");
	for(i=0;i<n1;i++){
		scanf("%lf",&arr1[i]);
	}
	printf("Enter the size of second array: ");
	scanf("%d",&n2);
	double arr2[n2];
	printf("Enter the elements: ");
	for(i=0;i<n2;i++){
		scanf("%lf",&arr2[i]);
	}
	int j;
	double temp;
	for(i=0;i<n1-1;i++){
		for(j=0;j<n1-i-1;j++){
			if(arr1[j]>arr1[j+1]){
				temp = arr1[j];
				arr1[j]=arr1[j+1];
				arr1[j+1] = temp;
			}
		}
	}
	for(i=0;i<n2-1;i++){
		for(j=0;j<n2-i-1;j++){
			if(arr2[j]>arr2[j+1]){
				temp = arr2[j];
				arr2[j]=arr2[j+1];
				arr2[j+1] = temp;
			}
		}
	}
	bruh(arr1,arr2,n1,n2);
}

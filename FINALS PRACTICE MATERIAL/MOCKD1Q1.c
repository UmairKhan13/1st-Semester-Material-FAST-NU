#include<stdio.h>

int main() {
	int n,i;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter numbers one by one: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int temp = arr[0];
	arr[0]=arr[n-1];
	arr[n-1]=temp;
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
}

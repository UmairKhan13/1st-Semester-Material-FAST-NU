#include<stdio.h>
int toH(int n,char from,char to,char mid);
int main(){
	int n;
	printf("Enter the number of disks: ");
	scanf("%d",&n);
	toH(n,'A','C','B');
}
int toH(int n,char from,char to,char mid){
	if(n==1){
		printf("\n Move disk 1 from rod %c to rod %c", from, to);
		return;
	}
	toH(n-1,from,mid,to);
	printf("\n Move disk %d from rod %c to rod %c", n, from, to);
	toH(n-1,mid,to,from);
}

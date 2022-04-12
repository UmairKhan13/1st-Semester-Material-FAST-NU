#include <stdio.h> 
#include <math.h> 
#include<string.h>
  
void printPowerSet(int *set, int set_size) 
{ 
    /*set_size of power set of a set with set_size 
      n is (2**n -1)*/
    unsigned int pow_set_size = pow(2, set_size); 
    int counter, j; 
  
    /*Run from counter 000..0 to 111..1*/
    for(counter = 0; counter < pow_set_size; counter++) 
    { 
      for(j = 0; j < set_size; j++) 
       { 
          /* Check if jth bit in the counter is set 
             If set then print jth element from set */
          if(counter & (1<<j)) 
            printf("%d", set[j]); 
       } 
       printf("\n");
    } 
} 
void xNumber(int *num,int size){
	int count=1,temp[10],i,n;
	int sum=0;
	for(i=0;i<size;i++){
		sum += pow(num[i],2);
	} 
    int tempsum = 0;
	n=sum; 
     
    // Loop to do sum while 
    // sum is not less than 
    // or equal to 9 
    while(n > 0 || tempsum != 1) 
    {
		tempsum=0; 
        if(n == 0) 
        { 
            n = tempsum; 
            tempsum = 0; 
        } 
        tempsum += pow(n%10,2); 
        n /= 10;
		count++;
		if(count>10){
			break;
		} 
    }
	if(count<10){
		printf("It is an X Number.");
	} else {
		printf("It is not an X Number.");
	}
}
int main() 
{ 
	int num,n;
   
    printf("Enter number of digits: ");
    scanf("%d",&n);
	printf("Enter the number: ");
	scanf("%d",&num);
	int number[n];
	int i;
	for(i=n-1;i>=0;i--){
		int x=num%10;
		number[i]=x;
		num /=10;
	}
	printPowerSet(number, n); 
 	xNumber(number,n);
	return 0;
} 

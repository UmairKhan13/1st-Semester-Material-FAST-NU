#include <stdio.h>
#include <string.h>
int main()
{
	int i,j;
	char arr[50];
	char arr2[50];
	printf("Enter the string:\n");
	fflush(stdin);
	gets(arr);
	int x=strlen(arr);
	for (i=0,j=0;i<x;i++,j++) //able was i ere i saw elba
	{
		if (arr[i]==' '||arr[i]=='.'||arr[i]==',')
		i++;
		arr2[j]=arr[i];
	}
	puts(arr2);
	int y=strlen(arr2);
	printf("\n%d",ispalindrome(arr2,y));
	return 0;
} 
int ispalindrome(char arr[],int y)
{
	return testpalindrome(arr,0,y-1);
}

int testpalindrome(char arr[],int f,int l)
{
	if (f==l) //1==3
	{
		return 1;
	}
	else if (arr[f]!=arr[l])
	{
		return 0;
	}
	else if (arr[f]==arr[l])
	{
		return testpalindrome(arr,f+1,l-1);
	}
}

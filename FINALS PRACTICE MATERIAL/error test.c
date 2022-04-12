#include<stdio.h>

main()
{
char *arr[] = { "ant", "bat", "cat",
"dog", "egg", "fly" };
function(arr);
}
void function(char **ptr)
{
char *ptr1;
ptr1 = (ptr += sizeof(int))[-3];
printf("%s\n", ptr1);
}

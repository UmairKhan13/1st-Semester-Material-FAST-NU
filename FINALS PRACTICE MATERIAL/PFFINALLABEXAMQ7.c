#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
char wordstofind[][15]={"stupid","fool","ugly","pathetic","bad","unethical","dishonourable","untrustworthy"};
char wordtoreplace[][20]={"great","intelligent","vibrant","shiny","good","ethical","honourable","trustworthy"};
char input[50];
printf("Enter string :");
gets(input);
char res[80];
char *token=strtok(input," ");
int i,j,n=10,loop=0,check=1;
while(token!=NULL)
{
    for(i=0;i<n;i++)
    {
        if(strcmp(token,wordstofind[i])==0)
        {check=0;
            for(j=0;j<strlen(wordtoreplace[i]);j++)
            {
                res[loop++]=wordtoreplace[i][j];
            }
            
        }
        
        
    }
    if(check==1)
    {
        for(j=0;j<strlen(token);j++)
            {
                res[loop++]=token[j];
            }
    }
    res[loop++] = ' ' ;
        check=1;
    token=strtok(NULL," ");
}
res[loop]='\0';
puts(res);

return 0;
}

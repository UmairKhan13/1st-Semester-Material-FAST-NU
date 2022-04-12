#include<stdio.h>
#include <stdlib.h>
//declaring student structure
typedef struct
{

char stnumber[10];
char name[20];
char num[20];

}student;


int search(student st[],char id[], int itemcount);
void displayheading();

void displaymenu(){
  printf("==================================================\n");
  printf(" MENU \n");
  printf("==================================================\n");
  printf(" 1.Add student records\n");
 printf(" 2.View all student records\n");
  printf(" 3.Update student records\n");
}
void add_rec(student st[],int *itemcount){

again:
  printf("\nEnter  ID:");
  scanf("%s",&st[*itemcount].stnumber);
  if(search(st,st[*itemcount].stnumber,*itemcount)!=-1){
  printf("This ID already exists\n");goto again;
}


		printf("Enter Name:");
  scanf("%s",&st[*itemcount].name);
   printf("\nEnter phone number:");
   scanf("%s",&st[*itemcount].num);
   ++(*itemcount);
   }
   
   
   int search(student st[], char id[],int itemcount){
  int found =-1,i;

  for (i = 0; i < itemcount && found==-1; i++)
  {

    if (strcmp(st[i].stnumber,id)==0) found=i;

    else found=-1 ;
  }

return found;
}

void viewall(student st[], int itemcount){
 int i=0;
 displayheading();
 while(i<itemcount){
   if(st[i].stnumber!=""){
   	 printf("%-5s",st[i].stnumber);
    printf("%-17s",st[i].name);
    printf("%-5s",st[i].num);
     printf("\n");
   }
   i=i+1;

}


}

void displayheading(){
   printf("ID NAME NUMBER  \n");
   printf("==========================================\n");
}




void update_rec(student st[],int itemcount){
char id[10];
int column_index;
printf("Enter student's ID:");
scanf("%s",&id);
printf("Which field you want to update(1-2)?:");
scanf("%d",&column_index);


int index = search(st, id,itemcount);

if (index != -1)
{
if (column_index == 1)
{
printf("Enter student's Name:");

scanf("%s",&st[index].name);
}

else if (column_index == 2)
{
printf("Enter phone number");
scanf("%s",&st[index].num);
}
else printf("Invalid column index");
}
else printf("The record deosn't exits.Check the ID and try again.");


}

int main(){
	student st[20];
int itemcount=0;

//show menu
displaymenu();
int yourchoice;
char confirm;
do
{
printf("Enter your choice(1-3):");
scanf("%d",&yourchoice);

switch(yourchoice){
case 1:add_rec(st, &itemcount);break;
case 2:viewall(st, itemcount);break;
case 3:update_rec(st, itemcount);break;
default:printf("invalid\n");
}

printf("Press y or Y to continue:");
scanf("%s",&confirm);
}while(confirm=='y'||confirm=='Y');
system("PAUSE");
return EXIT_SUCCESS;
}





	

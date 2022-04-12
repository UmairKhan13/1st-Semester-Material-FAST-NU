#include<stdio.h>
int stable_month(double *arr){
	double min=*arr;
	int pos=0,i;
	for(i=0;i<5;i++){
		if(*(arr+i)<min){
			min=*(arr+i);
			pos=i;
		}
	}
	return pos;
}
int main() {
	int month;
	char *month_name[5]={"January","February","March","April","May"};
	char *dep_name[5]={"Surgery","Emergency","Skin     ","Covid19","Dentistry"};
	double input_data[5][5]={{27000.50,34000.50,45000.50,50000.50,50000},
							{29000.50,27000.55,36000.00,36000.50,37000.50},
							{27000.50,36000.00,27000.00,36000.50,22000.50},
							{36000.50,36000.50,39000.50,27000.00,22000.00},
							{27000.50,36000.55,36000.00,22000.00,27000.00}};
	double department_wise_total[5]={240002,201002.6,170002,182002,170001.1};
	double month_wise_total[5]={146002.5,169002.1,183001,171001.5,158001};
	month = stable_month(month_wise_total);
	printf("\t\t\t\t\t EXPENSE REPORT \n");
	printf("======================================================================================\n");
	printf("\t");
	int i,j;
	for(i=0;i<5;i++){
		if(i>2){
			printf("\t");
		}
		printf("\t %s",month_name[i]);
	
	}
	printf("\n\t");
	printf("\t =======\t ========\t =====\t\t =====\t\t ===\n");
	printf("Department\n");
	printf("----------\n");
	for(i=0;i<5;i++){
		printf("%s \t",dep_name[i]);
		for(j=0;j<5;j++){
			
			printf("%.2lf\t",input_data[i][j]);
		}
		printf("\n");
	}
	printf("\nThe most stable month was %s\n",month_name[month]);
	
}

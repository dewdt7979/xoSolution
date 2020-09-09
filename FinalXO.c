#include<stdio.h>
//Define N table
double DefineTable(){
	
	//define parameter
	int i,j;
    double row,table,way=1,way2; 
    double facr=1;
    
    // row = n.
	//Table = row * row.  
	//way = Factorio (1-Way).
	//way2 = 2*cnt (2-Way).
	//Facr = Factorio of row.
	
	//Ask Row & Collum for Create Table.
	printf(" --------------------------------------------\n");
	printf("| Welcome To Tic Tac Toe n*n Table.        |\n");
	printf("| Please Enter Row & Collum to predic data.|\n");
	printf("--------------------------------------------\n");
	printf("\nEnter Table: ");
	scanf("%lf",&row);
	
	//Test count.
	//printf("You want : %d\n",table);
	
	// n*n Function.
	table = row * row;
	//printf("Enter Table = %d",table);

	//Factorio of row.
	for(j=row;j>=1;j--){
		facr *= j;
	}
	
	//Factorio Function of table.
	for(i=table;i>=1;i--){
		way *= i;
	}
	//2-Way.
	way2 = 2 * way;
	
	//Way To play XO.
	printf("1-Way Choose(X,O) : %.0lf\n",way);
	printf("2-Way Choose(X,O) : %.0lf\n",way2);
	
	//Find Win Way Function.
	double win;
	win = 4*(row+1)*facr;
	
	//Print Win of Allway.
	printf("\n");
	printf("Win Way : %.0lf\n",win);
	printf("End of Program");
	
	return(win);
}
		
int main(){
	
	int table,cnt,win;
	DefineTable(win);
	
	return;
}

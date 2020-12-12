#include<stdio.h>
#include<conio.h>
     
int main(){
	struct book{
		int id;
		char name[20];
		char publisher_name[30];
		float year;
	};
	
	struct book book1={
	20114,"physics","oxford publications",2014
	}; 
	printf("Book details \n");
	printf("Book ID %d\n",book1.id);
	printf("Book Name %s\n",book1.name);
	printf("Book publisher: %s\n",book1.publisher_name);
	printf("Book Year: %f\n",book1.year);
	return 0;
}     

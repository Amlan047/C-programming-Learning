#include<stdio.h>
#include<conio.h>

int main(){
	struct book{
		int isbn;
		char name[20];
		char publisher_name[30];
		int year;
	};
	
	struct book book1={
		1233,"Physics","Oxford",2013
	};
	
	struct book book2={
		1563,"Chemistry","Cambridge",2020
	};
	
	printf("Book1 ISBN: %d\n",book1.isbn);
	printf("Book1 Name: %s\n",book1.name);
	printf("Book1 publisher_name: %s\n",book1.publisher_name);
	printf("Book1 year: %d\n",book1.year);
	
	printf("Book2 ISBN: %d\n",book2.isbn);
	printf("Book2 Name: %s\n",book2.name);
	printf("Book2 publisher_name: %s\n",book2.publisher_name);
	printf("Book2 year: %d\n",book2.year);
	
	return 0;
	
}

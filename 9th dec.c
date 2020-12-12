#include<stdio.h>





int main(){
	
	
	int a=25;
	int *ptra=&a;

	printf("%d\n",ptra);
    printf("%d\n",ptra +1);
    printf("%d\n",ptra +2);
    printf("%d\n",ptra -3);
 
	return 0;
}

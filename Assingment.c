#include <stdio.h>
#include <math.h>

double squareRoot(int a){
	return sqrt(a);
}
int main(){
	int b;
	float c;
	
	printf("Enter the  number: \n");
	scanf("%d", &b);
	
	c =squareRoot(b);
	printf("The square root is: %f", c);
	return 0;
}

#include <stdio.h>

int main(){
	
	int n, i = 1;
	int sum = 0;
	
	printf("Enter n: ");
	scanf("%d", &n);
  /*	
	for(int i = 1; i <= n; i++){
		sum = sum + (i*i);
	}
	*/
	
	/*
	while (i<=n){
		sum = sum + (i*i);
		i++;
	}
	*/
	
	do{ 
	sum += (i*i);
	i++;
	} while (i <= n);
	
	printf("Sum: %d", sum);
}

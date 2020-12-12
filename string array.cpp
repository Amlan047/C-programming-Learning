#include <stdio.h>
#include <string.h>

int main(){
	
	char str1[50] = "Hello";
	char str2[50] = "Hello";
	int result = strcmp(str1, str2);
	
	printf("%d", result);
}

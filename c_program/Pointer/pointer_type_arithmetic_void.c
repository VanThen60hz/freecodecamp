#include <stdio.h>
#include <stdlib.h>


int main(){
	int a = 1025;
	int *p;
	p = &a;
	
	printf("size of integer is %d bytes\n", sizeof(int));
	printf("Address = %d, value = %d\n", p, *p);
	printf("Address = %d, value = %d\n", p+1, *(p+1));
	
	
//	char *p0;
//	p0 = (char*)p; // typecasting
//	printf("size of char is %d bytes\n", sizeof(char));
//	printf("Address = %d, value = %d\n", p0, *p0);
//	printf("Address = %d, value = %d\n", p0+1, *(p0+1));
	
	// void pointer - genric pointer - can't deference void pointer
	void *p0;
	p0 = p;
	printf("Address = %d", p0);
	
	return 0;
}
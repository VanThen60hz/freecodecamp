#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//	int a;
//	int *p;
//	a = 10; // assign value for a is 10
//	p = &a; //&a = address of a 
//	*p = 12; // assign dereference pointer p to 12 => value of a = 12
//	
//
//	
//	printf("Value of a: %d\n", a);
//	
//	printf("Value(address) of p: %d\n",p);
//	printf("value at dereference p: %d\n",*p);
//	printf("Address of a: %d\n",&a);	
//	
//	
//	int b = 20; // value of b = 20
//	*p = b; // dereference pointer p = b => a = 20
//	printf("Value(address) of p: %d\n",p);
//	printf("value at dereference p: %d\n",*p);
//	
//	printf("Value of a: %d\n", a);


	int a = 10;
	int *p = &a;
//	pointer arithmetic

	printf("value (address) of p: %d\n", p); // if p is 2002
	printf("Value at address %d is : %d\n", p, *p); // if p is 2002
	printf("size of interger is %d bytes\n", sizeof(int));
	printf("value (address of p+1 is: %d\n", p+1); // then p+1 is 2006
	printf("value at address %d is: %d\n", p+1, *(p+1));
	
	return 0;
}
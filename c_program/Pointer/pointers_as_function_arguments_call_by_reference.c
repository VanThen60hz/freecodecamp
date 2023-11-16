#include<stdio.h>

void increment(int *p){
	*p = (*p) + 1;
//	printf("Address of variable a in increment = %d\n", &p);
}

int main(){
	int a;
	a = 10;
	increment(&a);
//	printf("Address of variable a in main = %d", &a);
	printf("a = %d", a);
}
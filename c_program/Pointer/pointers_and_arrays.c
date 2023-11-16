#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int A[] = {2,4,5,8,1};

//	printf("%d\n", A);
//	printf("%d\n", &A[0]);
//	printf("%d\n", A[0]);
//	printf("%d", *A);

	int *p = A;
	for(int i=0 ; i<5 ; i++) {
		printf("%d\n", &A[i]);
		printf("%d\n", A+i);
		printf("%d\n", A[i]);
		printf("%d\n", *(A+i));
	}


	return 0;
}
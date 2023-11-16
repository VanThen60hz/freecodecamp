#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void doubleArray(int* A, int size) {
//	printf("Main - Size of A = %d , size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
	for(int i=0 ; i<size ; i++) {
		A[i] = 2*A[i];
	}
}


int main(int argc, char *argv[]) {

	int A[] = {1,2,3,4,5};
	int size = sizeof(A)/sizeof(A[0]);

	doubleArray(A, size);

	for(int i=0 ; i<size ; i++) {
		printf("%d ", A[i]);
	}

//	printf("Sum of elements = %d\n", total);
//	printf("Main - Size of A = %d , size of A[0] = %d\n", sizeof(A), sizeof(A[0]));

	return 0;
}
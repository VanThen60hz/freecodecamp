#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int main(int argc, char *argv[]) {
//
//// number when initilaze array need be = length + 1
////	char C[4] = "JOHN"; // error
//	char C[5] = {'J','O','H','N','\0'};
//	printf("SIze in bytes = %d\n", sizeof(C));
////	C[0] = 'J';
////	C[1] = 'O';
////	C[2] = 'H';
////	C[3] = 'N';
////	C[4] = '\0';
//	
//	int len = strlen(C);
//	
////	printf("%s", C);
//	printf("Length = %d\n", len);
//}


void print(char* C){
	while(*C != '\0'){
		printf("%c", *C);
		C++;
	}
	
	printf("\n");
}

int main(){
	char C[20] = "Hello";
	print(C);
}
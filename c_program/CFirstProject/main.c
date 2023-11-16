#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{


//    FILE * fpointer = fopen("employees.txt", "w"); // create and write in a file
//    FILE * fpointer = fopen("employees.txt", "a"); // append info into a file
//    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar,Accounting");
//    fprintf(fpointer, "\nKelly, Customer Service");

    char line[255];
    FILE * fpointer =  fopen("employees.txt", "r"); //read info from file

    fgets(line, 255, fpointer);
    fgets(line, 255, fpointer);

    printf("%s", line);

    fclose(fpointer);
    return 0;
}

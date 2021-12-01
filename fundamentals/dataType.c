#include <stdio.h>
#include <stdlib.h>
int main(){

    // data type in c
    /** common uses data type list:-
     * int 
     * char
     * float 
     * double
    */ 
    
    // example of integer data type
    int volume;
    int length = 10;
    int width = 20;
    volume = length*width;

    printf("The volume is %d\n", volume);

    // example of character data type 
    char firstLetter = 'A';
    printf("Character is %c\n", firstLetter);
    // print full line
    char fullLine[50] = "Hello Programmer!";
    printf("%s\n", fullLine);


    // example of float data type
    float floatNumber = 12.22130021586545821;
    
    printf("Example of float data type %f\n", floatNumber);
    printf("Print 2 number after decimal %.2f\n", floatNumber);

    // example of double data type
    double doubleNumber = 44.22112354000011;
    double pi = 3.14159265358979323846;

    printf("Example of double data type %lf\n", doubleNumber);
    printf("Print 8 number after decimal %.8lf\n", doubleNumber);

    printf("%lf", pi);

     return 0;
}
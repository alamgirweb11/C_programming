#include <stdio.h>
#include <stdlib.h>

int main(){
    // variable declaration
      int firstNumber = 10;
      char greetings[100] = "Hello world";
      float _1float_value = 10.00;
      double double_number = 23.0000002211144444;
      
      printf("%d\n", firstNumber);
      printf("%s\n", greetings);
      printf("%.2f\n", _1float_value);
      printf("%.10lf", double_number);

    return 0;

}

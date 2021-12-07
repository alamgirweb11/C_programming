#include <stdio.h>
int main()
{
   char x;

   printf("Enter any character ");

   // take input using getchar() method

   x = getchar();

   printf(" is your enter character.", putchar(toupper(x)));

   //   get output using putchar() method

   return 0;
}
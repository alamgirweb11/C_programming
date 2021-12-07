#include<stdio.h>
#include<stdlib.h>
int main(){

 char name[100];

 printf("Type your name ");

 // [%^\n] write for take space within two words/ print a line

 scanf("%[^\n]s", &name);

 printf("Your name is %s\n", name);

 // take multiple input and get output

 char s_name[50];
 int roll;
 int regi;

 printf("Type your name, roll, registration no : ");

 scanf("%s %d %d", &s_name, &roll, &regi);

 printf("Your name is %s, roll no %d and regi no %d", s_name, roll, regi);


return 0;
}
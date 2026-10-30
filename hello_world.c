//c program that accepts two numbers,sums them and displays their sum

//pre-processor directive
#include <stdio.h>

int main() {
   //character array to hold the user's name
   char name[80];

  //prompt th user for their name
   printf("Please enter your name:\n");

   //Read in the user's name
   gets(name);

   //Greet the user
   printf("\nHello%from C programming!",name);

    return 0;
}


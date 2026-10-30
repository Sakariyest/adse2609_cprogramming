/*This program asks/prompts the user for their name, reads the input
 from the console, and displays a greeting message. */

//pre-processor directive
#include <stdio.h>

int main() {
   //variables to be used in the program
   int firstNum=8,secondNum=5;

  //Display the values of the above variables
   printf("Values of 'firstNum'and 'secondNum'are %d and %d respectively");

   //Perform the various arithmetic operation and display their results
   printf("\n%15s:%d+%d=%2d","Addition",firstNum,secondNum,firstNum+secondNum);
   printf("\n%15s:%d✕%d=%2d","Multiplacation",firstNum,secondNum,firstNum*secondNum);
   printf("\n%15s:%d-%d=%2d","Subtraction",firstNum,secondNum,firstNum-secondNum);
   printf("\n%15s:%d÷%d=%2d","Division",firstNum, secondNum, firstNum/secondNum);
   printf("\n%15s:%d%%d=%2d","Modulus",firstNum,secondNum,firstNum%secondNum);

    return 0;
}


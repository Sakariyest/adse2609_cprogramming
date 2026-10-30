/* This program demonstrates the 'if...else'selection construct.it accepts a whole number and determines whether it's an odd or even number.*/

//pre-processor directive
#include <stdio.h>


int main() {

//variable to be used in the program
int num;

//prompt and read a whole number from the user
printf("Please enter a number and i'll tell you whether it's odd or even:\n");
scanf("%d",&num);

//use the 'if...else' construct to detemine whether the number is odd or even
if(num % 2 == 1)
    printf("'\n%d is an odd number",num);
else
    printf("\n%d is an even number",num);

        return 0;
}

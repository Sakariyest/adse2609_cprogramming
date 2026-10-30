/* This program demonstrates the 'if'selection construct.it accepts a letter of the alphabet from the user and checks if it's a vowel.*/

//pre-processor directive
#include <stdio.h>
#include<ctype.h> //includes definition for the'tolower()'function


int main() {

    //character array to hold the user's name
    char userLetter;

    //prompt the user for a letter of the alphabet
    printf("Please enter a letter of the alphabet and I'll tell you whether it's vowel:\n");
    scanf("%c",&userLetter);

    //convert the user's input to lowercase
    userLetter=tolower(userLetter);

    //check whether the letter is vowel
    if( userLetter == 'a'|| userLetter == 'e' || userLetter == 'i' || userLetter == 'o' || userLetter == 'u')
        printf("\n%c is vowel.",userLetter);

        return 0;
}

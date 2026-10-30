/* This program accepts an exam score and determines whether the student has passed or failed. */

#include <stdio.h>

int main() {

    // variable to be used in the program
    int score;

    // prompt and read the exam score from the user
    printf("Please enter your exam score (0-100):\n");
    scanf("%d", &score);

    // use the 'if...else' construct to check the score
    if (score < 0 || score > 100)
        printf("\ninvalid score! Please enter a score between 0 and 100.");

    else if (score >= 55)
        printf("\n%d%% - You have passed the exam.", score);

    else
        printf("\n%d% - You have failed the exam.", score);

    return 0;
}

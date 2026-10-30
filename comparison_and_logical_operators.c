#include <stdio.h>

int main()
{
    //varibles to beb used in the program
    int firstNum = 10, secondNum = 7;
    //diplay the values of th above varibles
    printf("Values of the 'firstNum' and 'secondNum' are %d and %d repectively",firstNum, secondNum);
    // Demonstrate the various comparison operatos
    printf("\nCOMPARISON OPERATORS");


    printf("\n==========================================");
    //Equal to '=='
    printf("\n%d equal to (==) %d ? %d", firstNum, secondNum,firstNum == secondNum);
    // Not equal to (!=)
    printf("\n%d != %d ? %d", firstNum, secondNum, firstNum != secondNum);

    // Greater than (>)
    printf("\n%d > %d ? %d", firstNum, secondNum, firstNum > secondNum);

    // Less than (<)
    printf("\n%d < %d ? %d", firstNum, secondNum, firstNum < secondNum);

    // Greater than or equal to (>=)
    printf("\n%d >= %d ? %d", firstNum, secondNum, firstNum >= secondNum);

    // Less than or equal to (<=)
    printf("\n%d <= %d ? %d", firstNum, secondNum, firstNum <= secondNum);


    printf("\n==========================================");


    // Demonstrate the various comparison operatos

    printf("\nLOGICAL OPERATORS");

    printf("\n==========================================");

    //lOGICAL AND  : Evaluates to ture when both expression are true
    printf("\nLOGICAL AND &&");
    printf("\n(%d > %d) && (%d > 0) = %d",firstNum, secondNum, firstNum,(firstNum > secondNum) && (firstNum > 0));

    //lOGICAL OR  : Evaluates to ture at least when one expression are true
    printf("\nLOGICAL OR (||)");
    printf("\n(%d < %d) || (%d < 0) = %d", firstNum, secondNum, firstNum,(firstNum < secondNum) || (firstNum < 0));

    //lOGICAL NOT  : reverses truth value of exprssion (true > false and false > true).
    printf("\nLOGICAL NOT (!)");
    printf("\n!(%d < %d) = %d",firstNum, secondNum,!(firstNum < secondNum));


    printf("\n==========================================");


    return 0;
}

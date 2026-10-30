/*this program demonstrates the various comparison and logical operators in c
to compare two integers and display the result.

NB: The ternary operator (?:) will be used to convert 0-> false & 1-> true */

 //pre-processor directive
 #include <stdio.h>

 int main()
 {

  //variables to be used in the program
  int firstNum =10,secondNum =7;

  //display the values of the above variables
  printf("value of the 'firstNum' and 'secondNum' %d are %d respectively.", firstNum, secondNum);



  //demostrate the various comparison operators
  printf("\nCOMPARISON OPERATORS");
  printf("\n==========================================");


  //equal to '=='operator
  printf("\n%d equal to (==) %d? %d",firstNum, secondNum, (firstNum == secondNum)==1?"true":"false");

//not equal to '!=' operator
  printf("\n%d not equal to (!=) %d? %s",firstNum, secondNum, (firstNum != secondNum)==1?"true":"false");
  //greater than or equal to '>=' operator
  printf("\n%d greater than or equal to (>=) %d? %d",firstNum, secondNum, firstNum >= secondNum);
  //greater than '>'
  printf("\n%d greater than (>) %d? %s",firstNum, secondNum, (firstNum > secondNum)==1?"true":"false");
  //less than '<'
  printf("\n% less than (<) %d? %s",firstNum, secondNum, (firstNum < secondNum)==1?"true":"false");
  //less than or equaL to '<='
  printf("\n%d less than or equal to (<=) %d? %s",firstNum, secondNum, (firstNum <= secondNum)==1?"true":"false");


  printf("\n==========================================");

  //demonstrate the various logical operators
  printf("\nLOGICAL OPERATORS");
  printf("\n==========================================");

  //Logical and : evaluates to true when both expressions are true
  printf("\nLOGICAL AND (&&)");
  Printf("\n(%d > %d) && (%d > 0) is %s", firstNum, secondNum, firstNum,
    ((firstNum > secondNum) && (firstNum>0))==1?"true":"false");
    //logical or evaluates to true when atleast one expressions is true
    printf("\nLOGICAL 'OR' (||)");
    printf("n(%d < %d) || (%d < 0) is %s", firstNum, secondNum, firstNum,
        ((firstNum < secondNum) || (firstNum<0))==1?"true":"false");
        //logical or : reverses truth values of expression (true > false) & ( false>true)
        printf("\nLOGICAL NOT (!)");
    printf("n(%d < %d) is %s \n! (%d < %d) is %s", firstNum, secondNum,((firstNum < secondNum)==1?"true":"false"),
        firstNum, secondNum, ! (( firstNum<0))==1?"true":"false");


        printf("\n==========================================");


        //NB: ternary operator is the short-hand form for an if.. else construct








  return 0;
 }

//This program accepts the radius of a circle from the user,calculates and displays its area,and circumference.*/

//pre-processor directive
#include <stdio.h>
#define MYPI 3.141593//Define pi as a constant

//main function provides the entry point to the program

int main() {
   //variables to be used in the program
   float radius,area,circumference;

   //prompt the user for the circle's radius
   printf("Please enter the radius of the circle in cm.\n");
   scanf("%f",&radius);


   //Calculate the area and circumference of the circle\
   area=MYP|*pow(radius,2);
   circumference=MYPI*(radius*2);


   //Display the circle's dimensions
   printf("\nCircle's Dimensions");
   printf("\n--------------------------------------------");
   printf("\n%-13s:%6.2fcm.","Radius",radius);
   printf("\n%-13s:%6.2fcm².","Area",area);
   printf("\n%-13s:%6.2fcm.","Circumference",circumference);
   printf("\n--------------------------------------------");


    return 0;
}


//This program accepts the base and the height of a right angle triangle,calculates and displays its area,and perimeter,using in-builtfunctions.*/

//pre-processor directive
#include <stdio.h>
#include <math.h>
#define MYPI 3.141593 //Define pi as a constant

//main function provides the entry point to the program

int main() {
   //variables to be used in the program
   float base, height, perimeter, area;

   //prompt the user for the triangle's base
   printf("Please enter the dimension of the triangle's base in cm.\n");
   scanf("%f",&base);

   //prompt the user for the triangle's base
   printf("Please enter the triangle's height in cm.\n");
   scanf("%f",&height);

   //declare and Calculate the triangle's hypotenuse
   float hypotenuse = sqrt((pow(height,2) + pow(base,2)) );


   //Calculate the area and perimeter of the right-angled triangle
   area = .5 * base * height;
   perimeter = base + height+ hypotenuse;


   //Display the triangle's dimensions
   printf("\Triangle's Dimensions");
   printf("\n--------------------------------------------");
   printf("\n%-13s:%6.2fcm.","Base",base);
   printf("\n%-13s:%6.2fcm².","Height",height);
   printf("\n%-13s:%6.2fcm.","Hypotenuse",hypotenuse);
   printf("\n%-13s:%6.2fcm.","Area",area);
   printf("\n%-13s:%6.2fcm.","Perimeter",perimeter);

   printf("\n--------------------------------------------");


    return 0;
}


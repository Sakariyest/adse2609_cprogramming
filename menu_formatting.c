/* This program displays a restaurant bill in a neat, tabular format. */

#include <stdio.h>

int main() {

    // Declare variables for quantities and unit prices
    int chips_quantity = 2;
    int burger_quantity = 1;
    int juice_quantity = 3;

    float chips_price = 150.00;
    float burger_price = 350.00;
    float juice_price = 100.00;

    // Calculate the total cost of each item
    float chips_total = chips_quantity * chips_price;
    float burger_total = burger_quantity * burger_price;
    float juice_total = juice_quantity * juice_price;

    // Calculate the grand total
    float grand_total = chips_total + burger_total + juice_total;

    // Display the restaurant bill heading
    printf("\n\t\tRESTAURANT BILL\n");
    printf("---------------------------------------------------------------\n");

    // Display the table headings
    printf("%-20s %10s %15s %15s\n",
           "Item", "Quantity", "Unit Price", "Total Price");

    printf("---------------------------------------------------------------\n");

    // Display chips details
    printf("%-20s %10d %15.2f %15.2f\n",
           "Chips", chips_quantity, chips_price, chips_total);

    // Display beef burger details
    printf("%-20s %10d %15.2f %15.2f\n",
           "Beef burger", burger_quantity, burger_price, burger_total);

    // Display fresh juice details
    printf("%-20s %10d %15.2f %15.2f\n",
           "Fresh juice", juice_quantity, juice_price, juice_total);

    printf("---------------------------------------------------------------\n");

    // Display the grand total
    printf("%-48s KSh %10.2f\n", "GRAND TOTAL:", grand_total);

    printf("---------------------------------------------------------------\n");

    return 0;
}

//This program calculates the total cost of items purchased at a shop.*/
#include <stdio.h>

int main() {
    // Declare variables
    float price, total_cost, discount, final_amount;
    int quantity;

    // Ask the user to enter the price of one item
    printf("Enter the price of one item in KSh: ");
    scanf("%f", &price);

    // Ask the user to enter the quantity purchased
    printf("Enter the quantity purchased: ");
    scanf("%d", &quantity);

    // Calculate the total cost before discount
    total_cost = price * quantity;

    // Calculate a 10%% discount if the total cost is at least KSh 1,000
    if (total_cost >= 1000) {
        discount = total_cost * 0.10;
    } else {
        discount = 0;
    }

    // Calculate the final amount payable
    final_amount = total_cost - discount;

    // Display the total cost, discount, and final amount
    printf("\nTotal Cost: KSh %.2f\n", total_cost);
    printf("Discount: KSh %.2f\n", discount);
    printf("Final Amount Payable: KSh %.2f\n", final_amount);

    // End the program successfully
    return 0;
}

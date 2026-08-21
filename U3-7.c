#include <stdio.h>

int main() {
    float price, total_purchase, discount, final_payment;
    int quantity;

    // Input price and quantity
    printf("Enter price of item: ");
    scanf("%f", &price);

    printf("Enter quantity of item: ");
    scanf("%d", &quantity);

    // Calculate total purchase
    total_purchase = price * quantity;

    // Check condition for discount
    if (total_purchase > 1000) {
        discount = total_purchase * 0.15; // 15% discount
    } else {
        discount = total_purchase * 0.10; // 10% discount
    }

    // Calculate final payment
    final_payment = total_purchase - discount;

    // Display output details
    printf("\n--- Bill Details ---\n");
    printf("Total Purchase: Rs. %.2f\n", total_purchase);
    printf("Discount Amount: Rs. %.2f\n", discount);
    printf("Final Payment:   Rs. %.2f\n", final_payment);

    return 0;
}
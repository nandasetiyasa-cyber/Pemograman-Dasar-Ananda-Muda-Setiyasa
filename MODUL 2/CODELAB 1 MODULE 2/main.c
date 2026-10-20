#include <stdio.h>
#include <string.h>

#define DELIVERY_FEE 10000

int main()
{
    char customerName[50];
    char foodName[50];
    int quantity;
    int foodPrice;
    int totalPrice;

    printf("==================================\n");
    printf(" ONLINE FOOD ORDER APPLICATION\n");
    printf("==================================\n");

    printf("Enter customer name : ");
    fgets(customerName, sizeof(customerName), stdin);

    customerName[strcspn(customerName, "\n")] = 0;

    printf("Enter food name : ");
    fgets(foodName, sizeof(foodName), stdin);

    foodName[strcspn(foodName, "\n")] = 0;

    printf("Enter food price : ");
    scanf("%d", &foodPrice);

    printf("Enter quantity : ");
    scanf("%d", &quantity);

    totalPrice = (foodPrice * quantity) + DELIVERY_FEE;

    printf("\n========== ORDER RECEIPT ==========\n");
    printf("Customer Name : %s\n", customerName);
    printf("Food Name     : %s\n", foodName);
    printf("Food Price    : Rp %d\n", foodPrice);
    printf("Quantity      : %d\n", quantity);
    printf("Delivery Fee  : Rp %d\n", DELIVERY_FEE);
    printf("Total Price   : Rp %d\n", totalPrice);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int price, quantity,customers, i = 0;
    float credit_limit,  value;


    printf("Please enter the number of customers you would like to serve:\n ");
    scanf("%d", &customers);


    while (i < customers) {
        printf("Customer %d:\n", i + 1);


        printf("Enter  your credit limit: ");
        scanf("%f", &credit_limit);
        printf("Enter price of each good you wish to purchase: ");
        scanf("%d", &price);
        printf("Enter quantity of goods you wish to purchase: ");
        scanf("%d", &quantity);


        value= price * quantity;


        while (value > credit_limit) {
            printf("Sorry you cannot purchase goods worthy such a value on credit.\n");
            printf("Please enter another price:\n ");
            printf("Please another  quantity of goods you would like to purchase:\n ");
            scanf("%d", &quantity);


            value = price * quantity;
        }


        printf("Your total purchase is Ksh. %.2f\n", value);


        i++;
    }


    printf("Thank You for purchasing from us.\n");
    return 0;
}

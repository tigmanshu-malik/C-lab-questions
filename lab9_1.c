#include<stdio.h>

int main(){

    struct product
    {
        char product_name[20];
        float price_per_unit;
        int quantity;
        float spent;
    };

    struct product product1;

    printf("Name of the prodct : \n");
    scanf("%s", product1.product_name);

    printf("Enter price per unit");
    scanf("%f", &product1.price_per_unit);

    printf("Enter number of quantities: \n");
    scanf("%d", &product1.quantity);

    product1.spent = product1.price_per_unit*product1.quantity;


    struct product *ptr = &product1;

    printf("name: %s, price per unit: %f, quantity: %d, amount spent: %f", ptr->product_name, ptr->price_per_unit, ptr->quantity, ptr->spent);

}
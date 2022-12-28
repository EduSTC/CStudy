#include <stdio.h>

int main(void)
{
    int item, month, day, year;
    float price;
    
    printf("Enter item number: ");
    scanf("%d", &item);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date: ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("Item\tUnit\tPurchase\t\n    \tPrice\tDate\n%d \t$  %.2f%.2d/%.2d/%.2d", item, price, month, day, year);


    return 0;

}
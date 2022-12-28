#include <stdio.h>

int main(void)
{
    #define TAX (5.0f / 100.0f)
    float amount, total;
    

    printf("Enter the Amount you have: ");
    scanf("%f", &amount);
    total = amount * TAX + amount;
    printf("With tax added: $%.2f", total);

    return 0;

}
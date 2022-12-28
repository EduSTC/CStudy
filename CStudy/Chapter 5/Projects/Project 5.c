#include <stdio.h>


int main(void)
{
    float income, tax;
    printf("Enter the amount of taxable income: ");
    scanf("%f", &income);
    if (income <= 750)
        tax = income * .01f;
    else if (income <= 2250)
        tax = 7.50 + (income - 750) * .02f;
    else if (income <= 3750)
        tax = 37.50 + (income - 2250) * .03f;
    else if (income <= 5250)
        tax = 82.50 + (income - 3750) * .04f;
    else if (income <= 7000)
        tax = 142.50 + (income - 5250) * .05f;
    else if (income > 7000)
        tax = 230.00 + (income - 7000) * .06f;
    
    printf("Tax due: $%.2f ", tax);

    return 0;


}   
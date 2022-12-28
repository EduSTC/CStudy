#include <stdio.h>

int main(void)
{
    float loan, interest_rate, monthly_payment, balance_1, monthly_interest_rate, balance_2, balance_3;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter amount of interest_rate: ");
    scanf("%f", &interest_rate);
    printf("Enter amount of monthly_payment: ");
    scanf("%f", &monthly_payment);


    monthly_interest_rate = (interest_rate / 100) / 12;
    balance_1 = loan - monthly_payment + loan * monthly_interest_rate;
    balance_2 = balance_1 - monthly_payment + balance_1 * monthly_interest_rate;
    balance_3 = balance_2 - monthly_payment + balance_2 * monthly_interest_rate;

    
    printf("Balance remaining after first payment %.2f\n", balance_1);
    printf("Balance remaining after second payment %.2f\n", balance_2);
    printf("Balance remaining after third payment %.2f\n", balance_3);

    return 0;


}
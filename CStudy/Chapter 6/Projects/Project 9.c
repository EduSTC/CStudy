#include <stdio.h>

int main(void)
{
    float loan, interest_rate, monthly_payment, balance, monthly_interest_rate, n, i;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter amount of interest_rate: ");
    scanf("%f", &interest_rate);
    printf("Enter amount of monthly_payment: ");
    scanf("%f", &monthly_payment);
    printf("Enter number of payments: ");
    scanf("%f", &n);



    monthly_interest_rate = (interest_rate / 100) / 12;
    balance = loan - monthly_payment + loan * monthly_interest_rate;


    for (i = 1; i <= n; i++){
        printf("Balance remaining after payment %.2f\n", balance);
        balance = balance - monthly_payment + balance * monthly_interest_rate;
    }
    

    return 0;


}
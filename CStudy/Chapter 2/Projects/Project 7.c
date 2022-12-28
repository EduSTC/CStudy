#include <stdio.h>

int main(void)
{
    #define DOL20 20
    #define DOL10 10
    #define DOL5 5
    #define DOL1 1
    
    int amount, num_20, num_10, num_5, num_1;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    num_20 = (amount / DOL20);
    printf("$20 bills: %d\n", num_20);
        num_10 = ((amount - num_20 * 20) / DOL10);
    printf("$10 bills: %d\n", num_10);
        num_5 = ((amount - num_10 * 10 - num_20 * 20) / DOL5);
    printf("$5 bills: %d\n", num_5);
        num_1 = ((amount - num_5 * 5 - num_10 * 10 - num_20 * 20) / DOL1);
    printf("$1 bills: %d\n", num_1);

    return 0;


}
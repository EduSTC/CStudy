#include <stdio.h>

int main(void)
{
    int digit, digit_1, digit_2;
    printf("Enter a two-digit number: ");
    scanf("%2d", &digit);
    digit_1 = digit % 10;
    digit_2 = digit / 10;
    printf("The reversal is: %d%d\n", digit_1, digit_2);

    return 0;


}
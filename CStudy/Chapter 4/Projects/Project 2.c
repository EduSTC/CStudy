#include <stdio.h>

int main(void)
{
    int digit, digit_1, digit_2, digit_3;
    printf("Enter a two-digit number: ");
    scanf("%3d", &digit);
    digit_1 = digit % 10;
    digit_2 = (digit / 10 % 10);
    digit_3 = digit / 100;
    printf("The reversal is: %d%d%d\n", digit_1, digit_2, digit_3);

    return 0;


}
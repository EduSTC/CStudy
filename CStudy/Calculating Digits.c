#include <stdio.h>

int main(void)
{
    int digit = 0, number, i;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &number);
    do {
        number = number / 10;
        digit += 1;

    } while (number > 0);
    printf("The number has %d digit(s)", digit);

    return 0;




}
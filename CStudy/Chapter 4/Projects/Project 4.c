#include <stdio.h>

int main(void)
{
    int number,last_digit, last_digit2, last_digit3, last_digit4, last_digit5;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);
    last_digit = number % 8;
    last_digit2 = (number / 8) % 8;
    last_digit3 = ((number / 8) / 8) % 8;
    last_digit4 = (((number / 8) / 8) / 8) % 8;
    last_digit5 = ((((number / 8) / 8) / 8) / 8) % 8;
    printf("In octal, your number is: %1d%1d%1d%1d%1d", last_digit5, last_digit4, last_digit3, last_digit2, last_digit);

    return 0;


}
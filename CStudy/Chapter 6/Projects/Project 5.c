#include <stdio.h>

int main(void)
{
    int digit, remainder;
    printf("Enter a positive integer number: ");
    scanf("%d", &digit);
    printf("The reversal is: ");
    do{
        remainder = digit % 10;
        printf("%d", remainder);
        digit /= 10;
    } while (digit > 0);

    return 0;


}
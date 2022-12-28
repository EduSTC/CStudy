#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("%d has ", number);
    if (number >= 100 && number <= 999)
    printf("3 digits");
    if (number >= 10 && number <= 99)
    printf("2 digits");
    if (number >= 0 && number <= 9)
        printf("1 digit");

}
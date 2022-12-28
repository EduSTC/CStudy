#include <stdio.h>

int main(void)
{
    float number, highest = 0;
    do{
        printf("Enter a number: ");
        scanf("%d", &number);
        if (highest < number)
            highest = number;
    } while (number > 0);

    printf("The highest number is: %d", highest);
    return 0;



}
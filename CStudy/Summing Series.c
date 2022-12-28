#include <stdio.h>

int main(void)
{
    int i, sum;
    i = 1;
    printf("This program is a sums a series of integers\n");
    printf("Enter integers (0 to terminante): ");
    while (i != 0){
        scanf("%d", &i);
        sum = sum + i;

    }
    printf("The sum is: %d", sum);

    return 0;

}
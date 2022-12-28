#include <stdio.h>

int main(void)
{
    int long i, sum = 0;
    i = 1;
    printf("This program is a sums a series of integers\n");
    printf("Enter integers (0 to terminante): ");
    while (i != 0){
        scanf("%ld", &i);
        sum += i;

    }
    printf("The sum is: %ld\n", sum);

    return 0;

}
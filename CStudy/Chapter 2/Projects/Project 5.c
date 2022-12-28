#include <stdio.h>

int main(void)
{
    int x, r;
    printf("Write a value for X: ");
    scanf("%d", &x);
    r = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
    printf("The value of the polynom is: %d\n", r);

    return 0;

}
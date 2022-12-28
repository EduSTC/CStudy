#include <stdio.h>

int main(void)
{
    int numl, denoml, num2, denom2, result_num, result_denom;
    printf("Enter two fractions separated by a plus sign: "); 
    scanf("%d/%d+%d/%d", &numl, &denoml, &num2, &denom2);
    result_num = numl * denom2 + num2 * denoml;
    result_denom = denom2 * denoml;
    printf("The sum is %d/%d", result_num, result_denom);

    return 0;
}
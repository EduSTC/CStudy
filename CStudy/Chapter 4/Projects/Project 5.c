#include <stdio.h>

int main(void)
{
        int f0, f1, f2, f3, f4, f5, s1, s2, s3, s4, s5, first_sum, second_sum, total;
    
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &f0, &f1, &f2, &f3, &f4, &f5, &s1, &s2, &s3, &s4, &s5);
    first_sum = f0 + f2 + f4 + s1 + s3 + s5;
    second_sum = f1 + f3 + f5 + s2 + s4;
    total = 9 - ((first_sum * 3 + second_sum - 1) % 10);
    printf("Check digit: %d", total);

    return 0;

}
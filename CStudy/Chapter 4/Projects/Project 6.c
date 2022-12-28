#include <stdio.h>

int main(void)
{
        int f0, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, first_sum, second_sum, total;
    
    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &f0, &f1, &f2, &f3, &f4, &f5, &f6, &f7, &f8, &f9, &f10, &f11);
    first_sum = f1 + f3 + f5 + f7 + f9 + f11;
    second_sum = f0 + f2 + f4 + f6 + f8 + f10;
    total = 9 - ((first_sum * 3 + second_sum - 1) % 10);
    printf("Check digit: %d", total);

    return 0;

}
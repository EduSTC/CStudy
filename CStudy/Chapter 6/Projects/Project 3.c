#include <stdio.h>

int main(void)
{
    int num_1, num_2, remainder, num_3, num_4;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num_1, &num_2);
    num_3 = num_1;
    num_4 = num_2;
    while (num_3 != 0){
        remainder = num_4 % num_3;
        num_4 = num_3;
        num_3 = remainder;
    }
    printf("in lowest terms: %d/%d", (num_1 / num_4), (num_2 / num_4));

    return 0;

}
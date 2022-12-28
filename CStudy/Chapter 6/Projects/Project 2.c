#include <stdio.h>

int main(void)
{
    int num_1, num_2, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &num_1, &num_2);
    while (num_1 != 0){
        remainder = num_2 % num_1;
        num_2 = num_1;
        num_1 = remainder;
    }
    printf("Greatest commom divisor: %d", num_2);

    return 0;

}
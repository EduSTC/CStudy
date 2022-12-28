#include <stdio.h>

int main(void)
{
    int num_1, num_2, num_3, num_4, num_5, num_6, num_7, num_8, num_9, num_10, num_11, num_12, num_13, num_14, num_15, num_16, row_sum_1, row_sum_2, row_sum_3, row_sum_4, column_sum_1, column_sum_2, column_sum_3, column_sum_4, diagonal_sum_1, diagonal_sum_2;
    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &num_1, &num_2, &num_3, &num_4, &num_5, &num_6, &num_7, &num_8, &num_9, &num_10, &num_11, &num_12, &num_13, &num_14, &num_15, &num_16);
    printf("%d  %d  %d  %d\n%d  %d  %d  %d  %d\n%d  %d  %d  %d\n%d  %d  %d  %d\n", num_1, num_2, num_3, num_4, num_5, num_6, num_7, num_8, num_9, num_10, num_11, num_12, num_13, num_14, num_15, num_16);
    row_sum_1 = num_1 + num_2 + num_3 + num_4;
    row_sum_2 = num_5 + num_6 + num_7 + num_8;
    row_sum_3 = num_9 + num_10 + num_11 + num_12;
    row_sum_4 = num_13 + num_14 + num_15 + num_16;
    column_sum_1 = num_1 + num_5 + num_9 + num_13;
    column_sum_2 = num_2 + num_6 + num_10 + num_14;
    column_sum_3 = num_3 + num_7 + num_11 + num_15;
    column_sum_4 = num_4 + num_8 + num_12 + num_16;
    diagonal_sum_1 = num_1 + num_6 + num_11 + num_16;
    diagonal_sum_2 = num_4 + num_7 + num_10 + num_13;
    printf("Row sums: %d %d %d %d\nColumn sums: %d %d %d %d\nDiagonal_sums: %d %d", row_sum_1, row_sum_2, row_sum_3, row_sum_4, column_sum_1, column_sum_2, column_sum_3, column_sum_4, diagonal_sum_1, diagonal_sum_2 );

    return 0;

}
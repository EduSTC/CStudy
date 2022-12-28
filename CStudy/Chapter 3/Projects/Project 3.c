#include <stdio.h>

int main(void)
{
    int gsi, group_identifier, publisher_code, item_number, check_digit;
    
    
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi, &group_identifier, &publisher_code, &item_number, &check_digit);
    printf("GSI prefix: %d\nGroup Identifier: %d\nPublisher Code: %d\nItem Number: %d\nCheck Digit: %d\n", gsi, group_identifier, publisher_code, item_number, check_digit);
    
    
    return 0;

}
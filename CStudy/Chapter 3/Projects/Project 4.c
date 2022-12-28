#include <stdio.h>

int main(void)
{
    int ddd, num_1, num_2;
    
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &ddd, &num_1, &num_2);
    printf("You entered %d.%d.%d\n", ddd, num_1, num_2);
    
    
    return 0;
}
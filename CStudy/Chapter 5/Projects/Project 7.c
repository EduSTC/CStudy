#include <stdio.h>


int main(void)
{
    int num_1, num_2, num_3, num_4, largest, smallest;
    
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num_1, &num_2, &num_3, &num_4);
    if (num_1 > num_2){
        largest = num_1;
        smallest = num_2;
    }
    else{
        largest = num_2;
        smallest = num_1;
    }
    if (largest < num_3)
        largest = num_3;
    else if (smallest > num_3)
        smallest = num_3;
    if (largest < num_4)
        largest = num_4;
    else if (smallest > num_4)
        smallest = num_4;
    printf("The largest is: %d and the Smallest is: %d", largest, smallest);

    return 0;
    



}
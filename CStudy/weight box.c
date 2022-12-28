
/*
* Computes the dimensional weight of a box from input provided by the user
*/
#include <stdio.h> /* directives standart I/O */
int main(void)
{
    // declarations //
    #define INCHES_PER_POUND 166
    int height, length, width, volume, weight;
    // statements //
    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume + INCHES_PER_POUND - 1) / 166;
    printf("Dimensions: %dx%dx%d\n", height, length, width);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);
    
    return 0;
}
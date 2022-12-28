#include <stdio.h>
int main(void)
{
    // declarations //
    #define INCHES_PER_POUND 166
    
    int height = 8, length = 12, width = 10, volume;
    
    // statements //
    volume = height * length * width;
    
    printf("Dimensions: %dx%dx%d\n", height, length, width);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);
    
    return 0;
}

// 
// Condense the dweight.c program by (1) replacing the assignments to height,
// length, and width with initializers and (2) removing the weight variable, instead cal¬ culating (volume + 165) / 166 within the last printf. 
//
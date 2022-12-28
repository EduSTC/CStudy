// Converts Fahrenheit temperature to Celsius //

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    float fahrenheit, celsius;
    

    printf("Enter Temperature (Fahrenheit): ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("%.2f Fahrenheit is %.2f Celsius\n", fahrenheit, celsius);
    
    
    return 0;

}

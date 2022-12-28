#include <stdio.h>


int main(void)
{
    int day, month, year;
    
    printf("Write a date: ");
    scanf("%d/%d/%d", &day, &month, &year);
    printf("You entered the date: %d%.2d%.2d", year, month, day);

    return 0;


}
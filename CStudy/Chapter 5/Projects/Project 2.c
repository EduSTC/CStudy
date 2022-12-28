#include <stdio.h>

int main(void)
{
    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    printf("Equivalent 12-hour time: ");
    if (hour = 12)
    printf("%d:%02d", hour, minute);
    if (hour > 12)
    printf("%d:%02d PM", hour - 12, minute);
    if (hour < 12)
    printf("%d:%02d AM", hour, minute);

    return 0;


}
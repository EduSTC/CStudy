#include <stdio.h>

int main(void)
{
    int day_1, day_2, month_1, month_2, year_1, year_2;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%02d/%02d/%02d", &month_1, &day_1, &year_1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month_2, &day_2, &year_2);
    if (year_1 < year_2)
        printf("%d/%d/%02d is earlier than %d/%d/%02d", month_1, day_1, year_1, month_2, day_2, year_2);
    else if (year_2 < year_1)
        printf("%d/%d/%02d is earlier than %d/%d/%02d", month_2, day_2, year_2, month_1, day_1, year_1);
    else if (month_1 < month_2)
        printf("%d/%d/%02d is earlier than %d/%d/%02d", month_1, day_1, year_1, month_2, day_2, year_2);
    else if (month_2 < month_1)
        printf("%d/%d/%02d is earlier than %d/%d/%02d", month_2, day_2, year_2, month_1, day_1, year_1);
    else if (day_1 < day_2)
        printf("%d/%d/%02d is earlier than %d/%d/%02d", month_1, day_1, year_1, month_2, day_2, year_2);
    else if (day_2 < day_1)
        printf("%d/%d/%02d is earlier than %d/%d/%02d", month_2, day_2, year_2, month_1, day_1, year_1);

        return 0;


}
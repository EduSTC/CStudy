#include <stdio.h>

int main(void)
{
    int day_1, day_2, month_1, month_2, year_1, year_2;
    printf("Enter a date (mm/dd/yy): ");
    scanf("%02d/%02d/%02d", &month_1, &day_1, &year_1);
    while (1){
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month_2, &day_2, &year_2);
        if (month_2 == 0 && year_2 == 0 && day_2 == 0){
            break;
        }
        else if (year_2 < year_1){
            day_1 = day_2;
            month_1 = month_2;
            year_1 = year_2;
        }
        else if (month_2 < month_1 && year_2 == year_1){
            day_1 = day_2;
            month_1 = month_2;
            year_1 = year_2;
        }
        else if (day_2 < day_1 && year_2 == year_1 && month_1 == month_2){
            day_1 = day_2;
            month_1 = month_2;
            year_1 = year_2;
        }
    }
    printf("%02d/%02d/%02d is the earliest date", month_1, day_1, year_1);
        return 0;


}
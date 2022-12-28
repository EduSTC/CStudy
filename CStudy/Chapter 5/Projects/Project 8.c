#include <stdio.h>


int main(void)
{
    int hours, minutes, time;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);
    time = hours * 60 + minutes;
    if (time < 8 * 60)
        printf("Closest departure time is 08:00 a.m., arriving at 10:16 a.m.");
    else if (time < 9 * 60 + 43)
        printf("Closest departure time is 09:43 a.m., arriving at 11:52 a.m.");
    else if (time < 11 * 60 + 19)
        printf("Closest departure time is 11:19 a.m., arriving at 01:31 p.m.");
    else if (time < 12 * 60 + 47)
        printf("Closest departure time is 12:47 p.m., arriving at 03:00 p.m.");
    else if (time < 14 * 60)
        printf("Closest departure time is 02:00 p.m., arriving at 04:08 p.m.");
    else if (time < 15 * 60 + 45)
        printf("Closest departure time is 03:45 p.m., arriving at 05:55 p.m.");
    else if (time < 19 * 60)
        printf("Closest departure time is 07:00 p.m., arriving at 09:20 p.m.");
    else
        printf("Closest departure time is 09:45 p.m., arriving at 11:58 p.m.");
    


    return 0;



}
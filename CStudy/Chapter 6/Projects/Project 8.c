#include <stdio.h>

int main(void){
    int j, i, days, start, space;
    space = "  ";
    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week: ");
    scanf("%d", &start);
    for (i = 1; i < start; i++)
        printf("   ");
    for (j = 1; j <= days; j++){
        printf("%3d", j);
        if (((j + start - 1) % 7) == 0){
            printf("\n");
        }
    
    }

    return 0;



}
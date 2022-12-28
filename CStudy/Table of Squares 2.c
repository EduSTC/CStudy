#include <stdio.h>

int main(void)
{
    int entries, i;
    printf("This program prints a table of squares\n");
    printf("Enter a number of entries in table: ");
    scanf("%d", &entries);
    for (i = 1; i <= entries; i++){
        printf("%10d%10d\n", i, i * i);
    }
    

    return 0;

}
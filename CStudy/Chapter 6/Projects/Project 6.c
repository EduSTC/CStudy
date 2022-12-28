#include <stdio.h>


int main(void)
{
    int n, i = 1, square;
    printf("Enter a integer number: ");
    scanf("%d", &n);


    do{
        square = i * i;
        if (square % 2 == 0){
            printf("%d\n", square);
        }
        i += 1;

    } while (square <= n); 

    return 0;


}

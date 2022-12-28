#include <stdio.h>

int main(void){
    int n, i, j;
    float m = 1, e = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1;e <= n;i++){
        for (j = 1; j <= i; j++){
            m *= j;
        }
        e += (1/m);
        m = 1;
    }
    printf("The value of e is: %f", e);

    return 0;




    
}
#include <stdio.h>


int main(void)
{
    int before, after, now, sum;
    before = 1;
    now = 1;
    after = 0;
    sum = 0;
    while (after < 4000000){
        after = before + now;
        before = now;
        now = after;
        if (after % 2 == 0){
            sum += after;
        }
        
    }
    
    printf("Sum: %d\n", sum);

    return 0;


}
#include <stdio.h>

int main(void)
{
    int s, r3, r5, i;
    s = 0;
    for (i = 1; i < 1000; ++i){
        r3 = i % 3;
        r5 = i % 5;
        if ((r3 == 0) || (r5 == 0)){
            s =  s + i;
        
        }
        
    }
    printf("%d", s);

    return 0;

}
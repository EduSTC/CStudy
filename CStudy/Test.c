#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch = 'a';
    do {
    scanf("%c", &ch);
    } while (ch != '\n');
    printf("%c", ch);

    return 0;

}

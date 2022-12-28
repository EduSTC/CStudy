#include <stdio.h>

int main(void)
{
    int grade;
    printf("Enter numerical grade: ");
    scanf("%d", &grade);
    if ((grade > 100) || (grade < 0))
        printf("Illegal Grade!");
    switch (grade / 10){
        case 10:
        case 9: printf("Letter Grade: A"); break;
        case 8: printf("Letter Grade: B"); break;
        case 7: printf("Letter Grade: C"); break;
        case 6: printf("Letter Grade: D"); break;
        case 5: 
        case 4: 
        case 3: 
        case 2:
        case 1:
        case 0: printf("Letter Grade: F"); break;

    }
    return 0;

}
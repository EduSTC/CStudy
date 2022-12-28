#include <stdio.h>

int main(void)
{
    int area_code;
    printf("Enter Area Code: ");
    scanf("%3d", &area_code);
    switch (area_code) {
    case 229: printf("Albany"); break;
    case 404: case 470: case 678: case 770: printf("Atlanta"); break;
    case 478: printf("Macon"); break;
    case 912: printf("Savannah"); break;
    case 706: case 762: printf("Savannah"); break;
    default: printf("Area Code not recognized"); break;
    }

    return 0;
}




/* Exercise 1
The following program fragments illustrate the relational and equality operators. Show the output produced by each, assuming that i, j. and k are int variables.
(a) i = 2; j = 3;
k = i * j == 6; printf("%d", k); 1
(b) i = 5; j =10; k = 1 ; printf("%d", k > i < j); 1
(c) i = 3; j = 2; k = 1;
printf("%d", i < j == j < k); 1
(d) i = 3; j = 4; k = 5; printf("%d", i % j + i < k); 1
 */

/* Exercise 2
The following program fragments illustrate the logical operators. Show the output produced by each, assuming that i, j, and k are int variables.
(a) i = 10; j = 5; printf("%d", !i < j ) ; 1
(b) i = 2; j = 1;
printf("%d", !!i + !j); 1
(c) i = 5; j = 0; k = - 5 ; printf("%d", i && j | | k) ; 1
(d) i = 1; j = 2; k = 3; printf("%d", i < j || k) ; 1
*/

/* The following program fragments illustrate the short-circuit behavior of logical expressions. Show the output produced by each, assuming that i, j. and k are int variables.
i = 3, j = 4, k = 5;
printf("%d", i < j || ++j < k); 1
printf("%d %d %d", i, j, k); 3 4 5 
i = 7; j = 8, k = 9;
printf("%d ", i - 7 && j++ < k); 0
printf("%d %d %d", i, j,k) ; 7 8 9
i = 7, j = 8, k = 9;
printf("%d ", (i = j) || (j = k) ); 1
printf("%d %d %d", i, j,k) ; 8 8 9


i = 1, j = 1, k = 1;
printf("%d \n", ++i || ++j && ++k); 1 
printf("%d %d %d", i, j,k); 2 1 1
*/

/* Exercise 4
(i > j) - (j > i)
*/

/* Exercise 5
Yes, it prints the statement cause it became 0 <= 10 witch is true
*/

/* Exercise 6
Is the following if statement legal? if (n == 1-10)
printf("n is between 1 and 10\n");
If so, what does it do when n is equal to 5? Yes, nothing cause -9 != 5
*/

/* Exercise 7
What does the following statement print if i has the value 17? What does it print if i has the value -17?
printf("%d\n", i >= 0 ? i : -i) ; 17 and 17

*/

/* Exercise 8
The following if statement is unnecessarily complicated. Simplify it as much as possible. (Hint: The entire statement can be replaced by a single assignment.)
if age >= 13 && age <= 19 teenager = true; else
else teenager = false;
*/

/* Exercise 9
Are the following if statements equivalent? If not. why not?
if (score >= 90) printf("A"); else if (score >= 80) printf("B"); else if (score >= 70) printf("C") ; else if (score >= 60 ) printf("D"); else
printf("F") ;
if (score < 60) printf( "F") ; else if (score < 70) printf( "D" ) ; else if (score < 80) printf( "C") ; else if (score < 90) printf( "B" ); else
printf("A");
Yes, they are.

*/

/* Exercise 10
What output does the following program fragment produce? (Assume that i is an integer variable.)
i = 1;
switch (i % 3) {
case 0: printf("zero"); case 1 : printf("one"); case 2: printf("two");
 produce "onetwo" cause didn't have break
}
*/
/* Exercise 11
int main(void)
{
    int area_code;
    printf("Enter Area Code: ");
    scanf("%3d", &area_code);
    switch (area_code) {
    case 229: printf("Albany"); break;
    case 404: case 470: case 678: case 770: printf("Atlanta"); break;
    case 478: printf("Macon"); break;
    case 912: printf("Savannah"); break;
    case 706: case 762: printf("Savannah"); break;
    default: printf("Area Code not recognized"); break;
    }

    return 0;
}
*/
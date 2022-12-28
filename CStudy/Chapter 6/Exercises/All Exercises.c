#include <stdio.h>


int main(void)
{
    int i, sum;
    sum = 0;
    for (i = 0; i < 10; i++) { 
        if (i % 2){
            continue; 
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;

}



/* Exercise 1 
What output does the following program fragment produce?
i = 1;
while (i <= 128) { 
    printf("%d ", i); i *= 2;
}
It produces all the powers of two from 1 to 128
*/


/* Exercise 2
What output does the following program fragment produce?
i = 9384; 
do {
    printf("%d ", i); 
    i /= 10;
} while (i > 0 ) ;
it will divide 9384 by 10 until it became < 0
*/


/* Exercise 3
What output does the following for statement produce?
for (i = 5, j = i - 1; i > 0, j >0; --i, j=i-1)
    printf("%d ", i);
    5 4 3 2 
*/


/* Exercise 4
Which one of the following statements is not equivalent to the other two (assuming that the loop bodies are the same)?
(a) for (i = 0; i < 10; i++) ...
(h) for (i = 0; i < 10 ; ++i) ...
(c) for (i = 0; i++ <10; ) ... X
 
*/


/* Exercise 5
Which one of the following statements is not equivalent to the other two (assuming that the loop bodies are the same)?
(a) while (i < 10) {„.}
(b) for (; i < 10;) {...}
(c) do {...} while (i < 10); X
*/

/* Exercise 6
Translate the program fragment of Exercise I into a single for statement.
for (i = 1; i <= 128; i = i * 2)
}
*/


/* Exercise 7
Translate the program fragment of Exercise 2 into a single for statement.
for (i = 9384 ; i > 0; i /= 10){
    print("%d", i)
}
*/


/* Exercise 8
What output does the following for statement produce?
for (i =10; i >= 1; i /= 2){
printf("%d ", i++);
}
5, 3, 1, 1
*/

/* Exercise 9
Translate the for statement of Exercise 8 into an equivalent while statement. You will need one statement in addition to the while loop itself.
int i;
i = 10;
while (i >= 1){
    i /= 2;
    printf("%d", i++);
}
return 0;

/* Exercise 10

Show how to replace a continue statement by an equivalent goto statement.

while (…) {
  …
  continue;
  …
}
The equivalent code using goto would have the following appearance:

while (…) {
  …
  goto loop_end;
  …
  loop_end: ;    null statement 

*/


/* Exercise 11
What output does the following program fragment produce?
sum = 0;
for (i = 0; i < 10; i++) { 
    if (i % 2) 
        continue; 
        sum += i;
}
printf("%d\n", sum); 0

/* Exercise 12
The following "prime-testing” loop appeared in Section 6.4 as an example:
for (d = 2; d * d < n; d++) 
    if (n % d == 0) 
        break;
This loop isn’t very efficient. 
It’s not necessary to divide n by all numbers between 2 and n - I to determine whether it’s prime. 
In fact, we need only check divisors up to the square root of n. 
Modify the loop to take advantage of this fact. Hint: Don’t try to compute the square root of n; instead, compare d * d with n.
*/


/* Exercise 13
Rewrite the following loop so that its body is empty:
for (n = 0; m > 0; n++, m /= 2)
    continue;
*/

/* Exercise 14
Find the error in the following program fragment and fix it.
if (n % 2 == 0)
printf("n is even\n");

*/
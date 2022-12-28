#include <stdio.h>


int main(void)
{
    int i = 5, j;
    j = ++i *3-2; 
    printf("%d %d", i, j);

    return 0;
}




// Exercise 1

//
// Show the output produced by each of the following program fragments. Assume that i. j. and k are int variables.
// (a) i = 5; j = 3; 
// printf("%d %d", i / j, i % j); 1, 2
// (b) i = 2; j = 3;
// printf("%d", (i + 10) % j) ; 0
// (c) i = 7; j = 8; k = 9 ;
// printf("%d", (i + 10) % k / j) ; 1
//(d) i = 1; j = 2; k = 3;
//printf( "%d", (i + 5) % (j + 2) / k) ; 0
//

// Exercise 2

// If i and j are positive integers, does (- i) / j always have the same value as - (i/j ) ? Jus¬ tify your answer. Before c99 no, cause it can be -1 or -2
//

// Exercise 3

// What is the value of each of the following expressions in C89? (Give all possible values if an expression may have more than one value.)
// (a) 8 / 5 = 1
// (b) -8/5 = -1 or -2
// (C) 8 / -5 = -1 or -2
// (d) -8 / -5 = 1

// Exercise 4
// a = 1
// b = -1
// c = -1
// d = 1

// Exercise 5
// What is the value of each of the following expressions in C89? (Give all possible values if an expression may have more than one value.)
// (a) 8 % 5 = 3
// (b) -8 % 5 = -3 or 2 
// (c) 8 % -5
// (d) -8 % -5

// Exercise 6
//
//
//
//

// Exercise 7
// Cause it will change the order operation

// Exercise 8
// No


// Exercise 9
// Show the output produced by each of the following program fragments. Assume that i. j. and k are int variables.
// (a) i = 7; j = 8;
// i *= j + 1;  63, 8
// printf("%d %d", i, j); 
// (b) i = j = k = 1;
//   i += j += k; 
// printf("%d %d %d", i, j, k);
// (c) i = 1; j = 2; k = 3;
//  i -= j -= k; 3, -1, 2
// printf("%d %d %d", i, j, k);
// (d) i = 2; j = 1; k = 0; 
// i *= j *= k; 0 0 0
// printf("%d %d %d", i, j, k);

// Exercise 10
// 12
// 4
// 8.5
// 9

// Exercise 11
// 1
// 4
// 0
// 3

// Exercise 12
// 16
// -7
// 23
// 15

// Exercise 13
// ++1 cause it applies instantly

// Exercise 14
// (a) (((a*b)-(c*d)) + e)
// (b) ((a / b) % (c / d))
// (c) (((- a) - b) + (c - (+ d)))
// (d) (((a * (- b)) / c)-d)

// Exercise 15
// Give the values of i and j after each of the following expression statements has been exe¬ cuted. (Assume that i has the value 1 initially and j has the value 2.)
// (a) i += j ;i = 3 j = 2
// (b) i--; i = 2 j =2
// (c) i * j / i; i = 2
// (d) i % ++j ; = 1
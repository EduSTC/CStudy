#include <stdio.h>


int main(void)
{
    int numl, denoml, num2, denom2, result_num, result_denom;
    printf("Enter first fraction: ");
    scanf("%d / %d", &numl, &denoml);
    printf("Enter second fraction: ");
    scanf("%d / %d", &num2, &denom2);
    result_num = numl * denom2 + num2 * denoml;
    result_denom = denoml * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom); return 0;

    return 0;
    
}

//
// Exercise 3

//For each of the following pairs of scanf format strings, indicate whether or not the two strings are equivalent. If they're not. show how they can be distinguished.
// (a) " %d" versus " %d" equivalent
// (b) "%d-%d-%d" versus "%d -%d -%d" not equivalent cause of the white-space
// (c) "%f" versus "%f " equivalent
// (d) "%f,%f" versus "%f, %f" not equivalent cause of the white-space

// Exercise 4

// Suppose that we call scanf as follows; scanf("%d%f%d», &i, &x, & j) ;
// If the user enters
// 10.3 5 6
// what will be the values of i. x. and j after the call? (Assume that i and j are int variables and x is a float variable.)10 0.3 


// Exercise 5

// Suppose that we call scanf as follows:
// scanf("%f%d%f", &x, &i, &y) ;
// If the user enters
// 12.3 45.6 789
// what will be the values of x. i. and y after the call? (Assume that x and y are float vari¬ ables and i is sin int variable.) 12.3 45 0.6
//


// Exercise 6
// Show how to modify the addf rac. c program of Section 3.2 so that the user is allowed to enter fractions that contain spaces before and after each / character.
// 
/*

Write an iterative O(Log y) function for pow(x, y)
Given an integer x and a positive number y, write a function that computes x^y under following conditions.
a) Time complexity of the function should be O(Log y)
b) Extra Space is O(1)
Examples:

Input: x = 3, y = 5
Output: 243

((3^2)^2)*3 = 3^5

log(5) = 2

*/

// Iterative C program to implement pow(x, n)
#include <stdio.h>

/* Iterative Function to calculate (x^y) in O(logy) */
int power(int x, unsigned int y)
{
    int res = 1; // Initialize result

    while (y > 0) {
        // If y is odd, multiply x with result
        if (y & 1)
            res = res * x;

        // n must be even now
        y = y >> 1; // y = y/2
        x = x * x; // Change x to x^2
    }
    return res;
}

// Driver program to test above functions
int main()
{
    int x = 3;
    unsigned int y = 5;

    printf("%d power %d is %d\n",x,y,power(x, y));

    return 0;
}

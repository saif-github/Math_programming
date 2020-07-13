/*
Efficient program to calculate e^x
The value of Exponential Function e^x can be expressed using following Taylor Series.

e^x = 1 + x/1! + x^2/2! + x^3/3! + ......
How to efficiently calculate the sum of above series?
The series can be re-written as

e^x = 1 + (x/1) (1 + (x/2) (1 + (x/3) (........) ) )
Let the sum needs to be calculated for n terms, we can calculate sum using following loop.

for (i = n - 1, sum = 1; i > 0; --i )
    sum = 1 + x * sum / i;

How we decide the value of n
*/

// C Efficient program to calculate
// e raise to the power x
#include <stdio.h>

// Returns approximate value of e^x
// using sum of first n terms of Taylor Series
float exponential(int n, float x)
{
    float sum = 1.0f; // initialize sum of series

    for (int i = n - 1; i > 0; --i )
        sum = 1 + x * sum / i;

    return sum;
}

// Driver program to test above function
int main()
{
    int n = 10;   //accuracy
    float x = 1.0f; // ans
    printf("e^x = %f\n", exponential(n, x));
    return 0;
}

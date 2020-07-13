/*

Find x and y satisfying ax + by = n
Given a, b and n. Find x and y that satisfies ax + by = n. Print any of the x and y satisfying the equation

Examples :

Input : n=7 a=2 b=3
Output : x=2, y=1
Explanation: here x and y satisfies the equation

we can simply iterate for all possible values from 0 to n as it cannot exceed n for this given equation

 So solving this equation with pen and paper gives y=(n-ax)/b and similarly we get the other number to be x=(n-by)/a.
 If none of the values satisfies the equation, at the end we print “no solution”

*/
#include <stdio.h>

// function to find the solution
void solution(int a, int b, int n)
{
  int i = 0;
    // traverse for all possible values
    for (i = 0; i * a <= n; i++) {
        // check if it is satisfying the equation
        if ((n - (i * a)) % b == 0) {
          printf("X = %d\t y = %d\n", i,(n - (i * a)) / b );
          return;
        }
    }
    printf("%s\n","No solution" );
}

/*void solution(int a, int b, int n)
{
  int i = 0;
    // traverse for all possible values
    for (i = 0; i * a <= n; i++) {
        // check if it is satisfying the equation
        if ((n - (i * b)) % a == 0) {
          printf("X = %d\t y = %d\n",(n - (i * b)) / a,i);
          return;
        }
    }
    printf("%s\n","No solution" );
}*/

// driver program to test the above function
int main()
{
    int a = 2, b = 3, n = 7;
    solution(a, b, n);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * This a recursive implementation of the Fibonacci sequence.
 * Let T(n) be the number of computer steps needed to compute fib1(n).
 * If n is less than 2, the procedure halts almost immediately after a couple of steps:
 *      T(n) is less than or equal to 2, when n is less than or equal to 1
 * If n is larger than 1, there are two recursive calls, total time of computation:
 *      T(n) = T(n - 1) + T(n - 2) + 3 for n > 1
 *  3 - three computer steps, checking the value of n and a final addition
 */
int fib1(int);
int main()
{
    // Test numbers
    int test1 = 1;
    int test2 = 3;
    int test3 = 10;

    // Call recursive fibonacci function
    printf("The value of fib1(1) is %d\n", fib1(test1));
    printf("The value of fib1(3) is %d\n", fib1(test2));
    printf("The value of fib1(10) is %d\n", fib1(test3));

    return 0;
}

int fib1(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    return fib1(n - 1) + fib1(n - 2);
}
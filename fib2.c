#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * Another fibonacci series implementation that stores values of the fib values in an array, so 
 * that we don't have repetitive computations.
 * 
 */

int fib2(int);

int main()
{
    // Test numbers
    int test1 = 1;
    int test2 = 3;
    int test3 = 10;

    // Call recursive fibonacci function
    printf("The value of fib1(1) is %d\n", fib2(test1));
    printf("The value of fib1(3) is %d\n", fib2(test2));
    printf("The value of fib1(10) is %d\n", fib2(test3));

    return 0;
}

int fib2(int n)
{
    if (n == 0)
    {
        return 0;
    }
    // Create an array of f[0...n]
    // Perhaps allocate some memory? (find out)
    int f[n];

    f[0] = 0;
    f[1] = 1;

    int i;
    for (i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }

    return f[n];
}
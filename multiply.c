#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int multiply(int, int);

int main()
{
    // Get the production of two numbers
    // The runtime of this algorithm is O(n2)
    int x = 13;
    int y = 11;

    int x1 = 12;
    int y1 = 10;

    printf(" The product of 13 and 11 is %d\n", multiply(x, y));
    printf(" The product of 12 and 10 is %d\n", multiply(x1, y1));
}

int multiply(int x, int y)
{
    if (y == 0)
    {
        return 0;
    }
    else
    {
        int z = multiply(x, floor(y / 2));
        if (y % 2 == 0)
        {
            return 2 * z;
        }
        else
        {
            return x + (2 * z);
        }
    }
}
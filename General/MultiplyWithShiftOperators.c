#include <stdio.h>

long int multiplyByShiftOperators(int a, int b)
{
    long int result = 0;
    while(b != 0)
    {
        if(b & 1)
        {
            result += a;
        }
        a <<= 1;
        b >>= 1;
    }
    return result;
}

int main(void)
{
    int a = 4, b = 8;

    printf("Result of %d x %d is: %ld\n", a, b, multiplyByShiftOperators(a, b));
    
    return 0;
}
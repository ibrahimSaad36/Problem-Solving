#include <stdio.h>

int fibonacciRecursion(int num)
{
    if(num == 0)
    {
        return 0;
    }
    else if(num == 1)
    {
        return 1;
    }
    else
    {
        return fibonacciRecursion(num - 1) + fibonacciRecursion(num - 2);
    }
}

int fibonacciWithoutRecursion(int num)
{
    int nth;
    if(num == 0)
    {
        nth = 0;
    }
    else if(num == 1)
    {
        nth = 1;
    }
    else
    {
        int i, prev = 0, current = 1;
        for(i = 2; i < num; i++)
        {
            nth = prev + current;
            prev = current;
            current = nth;
        }
    }
    return nth;
}

int main(void)
{
    int i, limit = 10;
    for(i = 0; i <= limit; i++)
    {
        printf("%d \t", fibonacciRecursion(i));
    }
    return 0;
}

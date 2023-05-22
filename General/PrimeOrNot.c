#include <stdio.h>

int isPrime(int num)
{
    int i, primeState = 1;
    
    if(num <= 1)
    {
        primeState = 0;
    }
    else
    {
        for(i = 2; i <= num / 2; i++)
        {
            if(num % i == 0)
            {
                primeState = 0;
                break;
            }
        }
    }
    return primeState;
}

int main(void)
{
    int i = 0, limit = 100;

    for(; i <= limit; i++)
    {
        if(isPrime(i))
        {
            printf("%d \t", i);
        }
    }

    return 0;
}
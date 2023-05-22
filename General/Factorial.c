#include <stdio.h>

long int factorialWithRecursion(int num)
{
    if(num < 0)
        return num;
    if(num == 0)
        return 1;
    else
        return num * factorialWithRecursion(num - 1);
}

long int factorialWithoutRecursion(int num)
{
    int fact = 1;
    if(num > 0)
    {
        int i;
        for(i = 1; i <= num; i++)
        {
            fact *= i;
        }
    }
    else
    {
        fact = num;
    }
    return fact;
}

int main(void)
{
    int num = 5;

    printf("With recursion, factorial of %d is: %ld\n", num, factorialWithRecursion(num));
    printf("Without recursion, factorial of %d is: %ld\n", num, factorialWithoutRecursion(num));

    return 0;
}
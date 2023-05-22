#include <stdio.h>

int maxZerosBetweenTwoOnes(int num) 
{
    int maxZeros = 0, countZeros = 0, foundOne = 0;
    while (num > 0) 
    {
        if (num & 1) 
        {
            foundOne = 1;
            if (countZeros > maxZeros) 
            {
                maxZeros = countZeros;
            }
            countZeros = 0;
        } 
        else 
        {
            if (foundOne) 
            {
                countZeros++;
            }
        }
        num >>= 1;
    }
    return maxZeros;
}

int main(void)
{
    int num = 0b100010000010000000000010;
    printf("Max zeros between two ones in %d is %d\n", num, maxZerosBetweenTwoOnes(num));
    return 0;
}
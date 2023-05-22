#include <stdio.h>

int reverseNum(int num)
{
    int reversedNum = 0;
    while(num > 0)
    {
        reversedNum = (reversedNum * 10) + (num % 10);
        num /= 10;
    }
    return reversedNum;
}

int main(void)
{
    int r = 1234;
    printf("Reverse of r is: %d\n", reverseNum(r));
    return 0;
}

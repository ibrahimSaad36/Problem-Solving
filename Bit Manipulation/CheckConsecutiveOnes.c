#include <stdio.h>

int checkConsecutiveOnes(unsigned int number)
{
   int i, firstOne = 0, secondOne = 0, ret = 0;
   for(i = 0; i < sizeof(number) * 8 - 1; i++)
   {
       firstOne = (number & (1 << i)) >> i;
       secondOne = (number & (1 << (i+1))) >> (i+1);
       if(firstOne && secondOne)
       {
           ret = 1;
           break;
       }
   }
    return ret;
}

int main(void)
{
    int num1 = 0b01000010010;
    int num2 = 0b011001110110;

    if(checkConsecutiveOnes(num1))
    {
        printf("num1 has consecutive ones\n");
    }
    else
    {
        printf("num1 hasn't consecutive ones\n");
    }

    if(checkConsecutiveOnes(num2))
    {
        printf("num2 has consecutive ones\n");
    }
    else
    {
        printf("num2 hasn't consecutive ones\n");
    }

    return 0;
}

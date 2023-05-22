#include <stdio.h>

unsigned int convertLittleToBigOrBigToLittle(unsigned int num)
{
    return (((-1 << sizeof(num)*4) & num) >> sizeof(num)*4) | (((~(-1 << sizeof(num)*4)) & num) << sizeof(num)*4);
}

int main(void)
{
    unsigned int little = 0xFFFF0000;
    printf("%x\n", convertLittleToBigOrBigToLittle(little));
    return 0;
}
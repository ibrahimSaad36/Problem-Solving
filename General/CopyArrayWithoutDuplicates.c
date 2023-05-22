#include <stdio.h>

typedef unsigned char u8;

u8 arr[] = {1, 2, 3, 4, 5, 6, 6, 5, 2, 1, 10};
u8 arrCpy[10];

/* Required to have time complexity O(n) */
void copyArrayWithoutDuplicates(u8* src, u8 srcSize, u8* dest, u8* destSize)
{
    u8 charMap[256] = {0}, i, j;
    *destSize = 0;
    for(i = 0, j = 0; i < srcSize; i++)
    {
        if(charMap[src[i]] == 0)
        {
            charMap[src[i]] = 1;
            dest[j] = src[i];
            j++;
            (*destSize)++;
        }
    }
}

int main(void)
{
    int destSize, i;
    copyArrayWithoutDuplicates(arr, 11, arrCpy, &destSize);

    for(i = 0; i < destSize; i++)
    {
        printf("%d\t", arrCpy[i]);
    }

    return 0;
}
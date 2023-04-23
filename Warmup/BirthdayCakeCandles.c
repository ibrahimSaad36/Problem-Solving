/*
    Source: HackerRank
    Link: https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=false
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size, *candles, i, max = 0, count = 0;
    
    scanf("%d", &size);
    
    candles = (int*) malloc(size * sizeof(int));
    
    for(i = 0; i < size; i++)
    {
        scanf("%d", &candles[i]);
        if(candles[i] > max)
        {
            max = candles[i];
        }
    }
    
    for(i = 0; i < size; i++)
    {
        if(candles[i] == max)
        {
            count++;
        }
    }
    
    printf("%d", count);
    
    return 0;
}

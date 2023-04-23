/*
    Source: HackerRank
    Link: https://www.hackerrank.com/challenges/mini-max-sum/problem?isFullScreen=false
*/

#include <stdio.h>

int main(void)
{
    int i, j;
    long nums[5], sums[5], min, max;
    
    for(i = 0; i < 5; i++)
    {
        scanf("%ld", &nums[i]);
    }
    for(i = 0; i < 5; i++)
    {
        sums[i] = 0;
        for(j = 0; j < 5; j++)
        {
            if(i == j)
            {
                continue;
            }
            sums[i] += nums[j];
        }
    }
    min = sums[0];
    for(i = 0; i < 5; i++)
    {
        if(sums[i] < min)
            min = sums[i];
    }
    max = sums[0];
    for(i = 0; i < 5; i++)
    {
        if(sums[i] > max)
            max = sums[i];
    }
    
    printf("%ld %ld", min, max);
    
    return 0;
}

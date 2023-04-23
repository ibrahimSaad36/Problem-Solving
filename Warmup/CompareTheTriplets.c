/*
    Source: HackerRank
    Link: https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=false
*/

#include <stdio.h>

int main(void)
{
    int aliceTriplets[3], bobTriplets[3], aliceScore = 0, bobScore = 0, i;
    
    for(i = 0; i < 6; i++)
    {
        if(i >= 3)
        {
            scanf("%d", &bobTriplets[i%3]);
            if(aliceTriplets[i%3] > bobTriplets[i%3])
            {
                aliceScore++;
            }
            else if(aliceTriplets[i%3] < bobTriplets[i%3])
            {
                bobScore++;
            }
            else 
            {
                // both are equal, do nothing
            }
        }
        else
        {
            scanf("%d", &aliceTriplets[i]);
        }
    }
    printf("%d %d", aliceScore, bobScore);
    
    return 0;
}

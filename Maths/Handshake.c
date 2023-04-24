/*
    Source: HackerRank
    Link: https://www.hackerrank.com/challenges/handshake/problem?isFullScreen=false
*/

#include <stdio.h>

int main(void)
{
    int t, n, i, handshakes, j;
    
    scanf("%d", &t);
    
    for(i = 0;i < t; i++)
    {
        scanf("%d", &n);
        if(n == 1)
        {
            handshakes = 0;
        }
        else
        {
            handshakes = 0;
            for(j = 0; j < n; j++)
            {
                handshakes += j;
            }
        }
        printf("%d\n", handshakes);
    }
    
    return 0;
}

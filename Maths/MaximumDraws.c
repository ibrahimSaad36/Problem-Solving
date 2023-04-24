/*
    Source: HackerRank
    Link: https://www.hackerrank.com/challenges/maximum-draws/problem
*/

#include <stdio.h>

int main(void)
{
    int t, n, i;
    
    scanf("%d", &t);
    
    for(i = 0; i < t; i++)
    {
        scanf("%d", &n);
        
        printf("%d\n", n+1);
    }
    
    return 0;
}

/*
    Source: HackerRank
    Link: https://www.hackerrank.com/challenges/lowest-triangle/problem?isFullScreen=false
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int b, a, h;
    
    scanf("%d %d", &b, &a);
    
    h = ceil((2.0*a) / b);
    
    printf("%d\n", h);
    
    return 0;
}

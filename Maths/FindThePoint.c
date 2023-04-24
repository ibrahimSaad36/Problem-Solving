/*
    Source: HackerRank
    Link: https://www.hackerrank.com/challenges/find-point/problem?isFullScreen=false
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Point
{
    short x, y;
}Point;

int main(void)
{
    Point *p, *q;
    short n, i, rx, ry;
    
    scanf("%hi", &n);
    
    p = (Point*) malloc(n * sizeof(Point));
    q = (Point*) malloc(n * sizeof(Point));
    
    for(i = 0; i < n; i++)
    {
        scanf("%hi %hi %hi %hi", &p[i].x, &p[i].y, &q[i].x, &q[i].y);
        
        rx = 2 * q[i].x - p[i].x;
        ry = 2 * q[i].y - p[i].y;
        
        printf("%hi %hi\n", rx, ry);
    }
    
    return 0;
}

/*
    Source: HackerRank
    Link: https://www.hackerrank.com/challenges/a-very-big-sum/problem?isFullScreen=false
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size, i;
    long *arr, sum = 0;
    
    scanf("%d", &size);
    
    arr = (long*) malloc(size * sizeof(long));
    
    for(i = 0; i < size; i++)
    {
        scanf("%ld", &arr[i]);
        sum += arr[i];
    }
    
    printf("%ld", sum);
    
    return 0;
}

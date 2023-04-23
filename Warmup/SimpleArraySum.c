/*
    Source: HackerRank
    Link: https://www.hackerrank.com/challenges/simple-array-sum/problem?isFullScreen=true
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size, *arr, sum = 0, i;
    
    scanf("%d", &size);
    
    arr = (int*) malloc(size * sizeof(int));
    
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    printf("%d", sum);
    
    return 0;
}

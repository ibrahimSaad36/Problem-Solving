/*
    Source: HackerRank
    Link: https://www.hackerrank.com/challenges/divisible-sum-pairs/problem?isFullScreen=false
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, k, *arr, i, j, sum, count = 0;
    
    scanf("%d %d\n", &n, &k);
    
    arr = (int*) malloc(n * sizeof(int));
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            sum = arr[i] + arr[j];
            if(sum % k == 0)
            {
                count++;
            }
        }
    }
    
    printf("%d", count);
    
    free(arr);
    
    return 0;
}

/*
    Source: HackerRank
    Link: https://www.hackerrank.com/challenges/the-birthday-bar/problem?isFullScreen=false
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, *arr, d, m, i, j, countM, count = 0, sum;
    
    scanf("%d", &n);
    arr = (int*) malloc(sizeof(int) * n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &d, &m);
    
    if(n == 1 && arr[0] == d && m == 1)
    {
        count++;
    }
    for(i = 0; i < n - 1; i++)
    {
        sum = arr[i];
        countM = 1;
        for(j = i+1; j < n; j++)
        {
            sum += arr[j];
            countM++;
            if(sum == d && countM == m)
            {
                count++;
                break;
            }
        }
    }
    
    printf("%d", count);
    
    return 0;
}

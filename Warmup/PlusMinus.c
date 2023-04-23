/*
    Source: HackerRank
    Link: https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=false
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr, size, pos, neg, zero, i;
    
    scanf("%d", &size);
    
    arr = (int*) malloc(size * sizeof(int));
    
    pos = neg = zero = 0;
    
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] > 0)
        {
            pos++;
        }
        else if(arr[i] < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    
    printf("%.6f\n%.6f\n%.6f", (pos*1.0)/size, (neg*1.0)/size, (zero*1.0)/size);
    
    return 0;
}

/*
    Source: HackerRank
    Link: https://www.hackerrank.com/challenges/equality-in-a-array/problem?isFullScreen=false
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* arr, n, i, j, maxCountRep = 0, maxRep, count = 0, countRep, foundRep = 0;
    
    scanf("%d", &n);
    
    arr = (int*) malloc(n * sizeof(int));
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    /* get most repeated element */
    maxRep = arr[0];    /* just in case of there no repeated elements we will still have an element to compare with */
    for(i = 0; i < n; i++)
    {
        countRep = 0;
        foundRep = 0;
        for(j = 0; j < n; j++)
        {
            if(i == j)
            {
                continue;
            }
            if(arr[i] == arr[j])
            {
                countRep++;
                foundRep = 1;
            }
        }
        if((countRep > maxCountRep) && foundRep)
        {
            maxCountRep = countRep;
            maxRep = arr[i];
        }
    }
    /* get number of elements to be deleted */
    for(i = 0; i < n; i++)
    {
        if(arr[i] != maxRep)
        {
            count++;
        }
    }
    
    printf("%d", count);

    free(arr);
    
    return 0;
}

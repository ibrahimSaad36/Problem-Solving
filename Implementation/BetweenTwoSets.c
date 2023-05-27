/*
    Source: HackerRank
    Link: https://www.hackerrank.com/challenges/between-two-sets/problem?isFullScreen=false
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, m, *arrN, *arrM, i, j, count = 0, check;
    
    scanf("%d %d", &n, &m);
    
    arrN = (int*) malloc(sizeof(int) * n);
    arrM = (int*) malloc(sizeof(int) * m);
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arrN[i]);
    }
    for(i = 0; i < m; i++)
    {
        scanf("%d", &arrM[i]);
    }
    
    for(int k = 1; k <= 100; k++)
    {
        check = 1;
        for(i = 0; i < n; i++)
        {
            if(k % arrN[i] != 0)
            {
                check = 0;
            }    
        }  
        for(i = 0; i < m; i++)
        {
            if(arrM[i] % k != 0)
            {
                check = 0;
            }
        }
        if(check == 1)
        {
            count ++;
        }
    }
    printf("%d", count);
    
    free(arrN);
    free(arrM);
    
    return 0;
}

/*
    Source: HackerRank
    Link: https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=false
*/


/*
        for n is odd:
            
            ex: n = 3
                0   1   2
                3   4   5
                6   7   8
            mainDiag contains [0 4 8] which is: i % 4 (i % (n + 1))
            branchDiag contains [2 4 6] which is i % 2 (i % (n - 1)) but ignore when i = 0
            you will find a common element (4) >> when i = ((n*n) / 2)
        
        for n is even:
            
            ex: n = 4
                0   1   2   3
                4   5   6   7
                8   9   10  11
                12  13  14  15
            mainDiag contains [0 2 10 15] which is i % 5 (i % (n + 1))
            branchDiag contains [3 6 9 12] which is i % 3 (i % (n - 1)) but ignore when i = 0
            
            and there is no common elements
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int *arr, n, i, mainDiag = 0, branchDiag = 0;
    
    scanf("%d", &n);
    
    arr = (int*) malloc(n * n * sizeof(int));
    
    for(i = 0; i < n * n; i++)
    {
        scanf("%d", &arr[i]);
        if(n % 2 != 0)
        {
            if(i == ((n * n) / 2))
            {
                mainDiag += arr[i];
                branchDiag += arr[i];
            }
            else
            {
                if(i % (n + 1) == 0)
                {
                    mainDiag += arr[i];
                }
                else if(i % (n - 1) == 0 && i != 0)
                {
                    branchDiag += arr[i];
                }
            }
        }
        else
        {
            if(i % (n + 1) == 0)
            {
                mainDiag += arr[i];
            }
            else if(i % (n - 1) == 0 && i != 0)
            {
                branchDiag += arr[i];
            }
        }
    }

    printf("%d", abs(mainDiag - branchDiag));
    
    return 0;
}

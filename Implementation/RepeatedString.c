/*
    Source: HackerRank
    Link: https://www.hackerrank.com/challenges/repeated-string/problem?isFullScreen=false
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[101];
    int strLen, countA = 0, i = 0;
    long long n, nOverStrLen, result;
    
    scanf("%s\n%lld", str, &n);
    
    strLen = strlen(str);
    
    while(str[i] != '\0')
    {
        if(str[i] == 'a')
        {
            countA++;
        }
        i++;
    }
    
    nOverStrLen = n / strLen;
    result = nOverStrLen * countA;
    
    for(i = 0; i < n % strLen; i++)
    {
        if(str[i] == 'a')
        {
            result++;
        }
    }
    
    printf("%lld", result);
    
    return 0;
}

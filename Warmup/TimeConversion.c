/*
    Source: HackerRank
    Link: https://www.hackerrank.com/challenges/time-conversion/problem?isFullScreen=false
*/

#include <stdio.h>

int main(void) 
{
    char str[11], result[9];
    int h, i;
    
    scanf("%s", str);

    if(str[8] == 'P')
    {
        if(str[0]== '1' && str[1] == '2')
        {
            for(i = 0; i < 8; i++)
            {
                result[i] = str[i];
            }
            result[8] = '\0';
        }
        else
        {
            if(str[0] == '0')
            {
                h = str[1] - '0';
                h += 12;
                sprintf(result, "%d", h);
                for(i = 2; i < 8; i++)
                {
                    result[i] = str[i];
                }
                result[8] = '\0';
            }
            else
            {
                h = 0;
                for (i = 0; i < 2; i++) 
                {
                    h = h * 10 + (str[i] - '0');
                }
                h += 12;
                sprintf(result, "%d", h);
                for(i = 2; i < 8; i++)
                {
                    result[i] = str[i];
                }
                result[8] = '\0';
            }
        }
    }
    else
    {
        if(str[0] == '1' && str[1] == '2')
        {
            result[0] = '0';
            result[1] = '0';
            for(i = 2; i < 8; i++)
            {
                result[i] = str[i];
            }
            result[8] = '\0';
        }
        else
        {
            for(i = 0; i < 8; i++)
            {
                result[i] = str[i];
            }
            result[8] = '\0';
        }
    }
    
    printf("%s\n", result);

    return 0;
}

/*
    Source: HackerRank
    Link: https://www.hackerrank.com/challenges/day-of-the-programmer/problem
*/

#include <stdio.h>
#include <stdlib.h>

int isLeapYear(int year)
{
    return ((year < 1918 && year % 4 == 0) || (year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int main(void)
{
    /* June, March, April, May, June, July, Aug */
    int year, i, sum, day;
    
    scanf("%d", &year);
    
    if(year == 1918)
    {
        printf("26.09.1918");
    }
    else
    {
        if(isLeapYear(year))
        {
            printf("12.09.%d", year);
        }
        else 
        {
            printf("13.09.%d", year);
        }
    }
    
    return 0;
}

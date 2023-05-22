#include <stdio.h>

int isPalindrome(int num)
{
    int check = num, reveresedNum = 0;

    while(check > 0)
    {
        reveresedNum = (reveresedNum * 10) + (check % 10);
        check /= 10;
    }
    return num == reveresedNum;
}

int main(void)
{
    int num = 12321;

    if(isPalindrome(num))
        printf("This number is a palindrome number\n");
    else
        printf("This number is not a palindrome number\n");
    return 0;
}
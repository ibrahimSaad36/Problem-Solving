/*
    Source: HackerRank
    Link: https://www.hackerrank.com/challenges/electronics-shop/problem
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int budget, keyBoardSz, usbSz, *keyBoard, *usb, i, j, max = -1, sum;
    
    scanf("%d %d %d", &budget, &keyBoardSz, &usbSz);
    
    keyBoard = (int*) malloc(keyBoardSz * sizeof(int));
    usb = (int*) malloc(usbSz * sizeof(int));
    
    for(i = 0; i < keyBoardSz; i++)
    {
        scanf("%d", &keyBoard[i]);
    }
    for(i = 0; i < usbSz; i++)
    {
        scanf("%d", &usb[i]);
    }
    
    for(i = 0; i < keyBoardSz; i++)
    {
        for(j = 0; j < usbSz; j++)
        {
            sum = keyBoard[i] + usb[j];
            if(sum > max && sum <= budget)
            {
                max = sum;
            }
        }
    }
    
    printf("%d", max);
    
    free(keyBoard);
    free(usb);
    
    return 0;
}

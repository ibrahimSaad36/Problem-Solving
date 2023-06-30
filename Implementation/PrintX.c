#include <stdio.h>

int main(void) 
{
    int row, i, j;
    printf("Please enter the number of rows: \n");
    scanf("%d", &row);
    
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < row; j++)
        {
            if(i == j || (j == (row - i - 1)))
            {
                printf("X");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
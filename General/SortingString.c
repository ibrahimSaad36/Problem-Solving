#include <stdio.h>

void bubbleSortStrings(char* arr[], int size) 
{
    int i, j;
    for (i = 0; i < size - 1; i++) 
    {
        for (j = 0; j < size - i - 1; j++) 
        {
            if (strcmp(arr[j], arr[j + 1]) < 0) 
            {
                char *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
	return 0;
}


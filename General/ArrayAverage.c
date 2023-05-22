#include <stdio.h>

float arrayAverage(int arr[], int size)
{
    int i, sum = arr[0];
    for(i = 1; i < size; i++)
    {
        sum += arr[i];
    }
    return (sum * 1.0) / size;
}

int main(void)
{
    int arr[] = {1, 2, 3, 4};

    printf("Average of arr is: %f\n", arrayAverage(arr, 4));

    return 0;
}
#include <stdio.h>

int mostRepeatedArrayElement(int arr[], int size)
{
    int i, j, maxIndex = 0, maxCount = 0, count;
    for(i = 0; i < size; i++)
    {
        count = 0;
        for(j = 0; j < size; j++)
        {
            if(i == j)
            {
                continue;
            }
            if(arr[i] == arr[j])
            {
                count++;
            }
            if(count > maxCount)
            {
                maxCount = count;
                maxIndex = i;
            }
        }
    }
    return maxIndex;
}

int main(void)
{
    int arr[] = {5, 12, 11, 11, 23, 5, 5, 5, 11, 11, 11};

    printf("Most repeated element in arr is: %d\n", arr[mostRepeatedArrayElement(arr, 11)]);
    
    return 0;
}
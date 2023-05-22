#include <stdio.h>
#include <stdlib.h>

void mergeTwoArrays(int arr1[], int n1, int arr2[], int n2, int arr3[])
{
    int i, j, k;
    for(i = 0, j = 0, k = 0; i < (n1 + n2); i++, j++)
    {
        if(i < n1)
        {
            if (arr1[i] <= arr2[j]) 
            {
                arr3[k] = arr1[i];
            } 
            else 
            {
                arr3[k] = arr2[j];
            }
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
        }
    }
}

int main(void) 
{
    int arr1[] = {1,3,5,7,9,11};
    int arr2[] = {2,4,6};

    int* mergedArr = (int*) malloc((6 + 3) * sizeof(int));

    mergeArrays(arr1, 6, arr2, 3, mergedArr);

    for (int i = 0; i < 6 + 3; i++) 
    {
        printf("%d ", mergedArr[i]);
    }

    free(mergedArr);

    return 0;
}

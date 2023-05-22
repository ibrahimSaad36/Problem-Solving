#include <stdio.h>
#include <stdlib.h>

void mergeTwoArrays(int arr1[], int n1, int arr2[], int n2, int mergedArr[]) 
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) 
    {
        if (arr1[i] <= arr2[j]) 
        {
            mergedArr[k] = arr1[i];
            i++;
        } 
        else 
        {
            mergedArr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < n1) 
    {
        mergedArr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n2) 
    {
        mergedArr[k] = arr2[j];
        j++;
        k++;
    }
}

int main(void) 
{
    int arr1[] = {1,3,5,7,9,11};
    int arr2[] = {2,4,6};

    int* mergedArr = (int*) malloc((6 + 3) * sizeof(int));

    mergeTwoArrays(arr1, 6, arr2, 3, mergedArr);

    for (int i = 0; i < 6 + 3; i++) 
    {
        printf("%d ", mergedArr[i]);
    }

    free(mergedArr);

    return 0;
}

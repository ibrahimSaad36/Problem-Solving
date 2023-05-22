#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int inspect_bits(unsigned int number)
{
   int i, firstOne = 0, secondOne = 0, ret = 0;
   for(i = 0; i < sizeof(number) * 8 - 1; i++)
   {
       firstOne = (number & (1 << i)) >> i;
       secondOne = (number & (1 << (i+1))) >> (i+1);
       if(firstOne && secondOne)
       {
           ret = 1;
           break;
       }
   }
    return ret;
}

typedef unsigned char u8;
void copyWithoutDuplicates(u8* src, u8 srcSize, u8* dest, u8* destSize)
{
    u8 freqArr[256] = {0}, i, j;
    for(i = 0, j = 0; i < srcSize; i++)
    {
        if(freqArr[src[i]] == 0)
        {
            freqArr[src[i]] = 1;
            dest[j] = src[i];
            j++;
        }
    }
    *destSize = j;
}

/* Time complexity O(log n) */
int binarySearchIterative(int arr[], int size, int key)
{
    int found = -1, start = 0, end = size - 1, middle;
    while(start <= end)
    {
        middle = (start + end) / 2;
        if(arr[middle] == key)
        {
            found = middle;
            break;
        }
        else if(arr[middle] < key)
        {
            start = start + 1;
        }
        else 
        {
            end = middle - 1;
        }
    }
    return found;
}
int main(void)
{
    int Array [10] = {10,2,15,23,10,18,23,28,17,8};

    int index = binarySearchIterative(Array, 10, 15);

    if(index > -1)
    {
        printf("Found 15 at index %d \n", index);
    }
    else
    {
        printf("Couldn't find 15 in array\n");
    }

    return 0;
}
/* Time complexity O(log n) */
int binarySearchUsingRecursion(int arr[], int start, int end, int key) {
    if (start > end) 
    {
        return -1;
    }
    int mid = start + (end - start) / 2;

    if (arr[mid] == key) 
    {
        return mid;
    } 
    else if (arr[mid] > key) 
    {
        return binarySearchUsingRecursion(arr, start, mid - 1, key);
    } 
    else 
    {
        return binarySearchUsingRecursion(arr, mid + 1, end, key);
    }
}

int maxZerosBetweenOnes(int n) {
    int maxZeros = 0;
    int countZeros = 0;
    int foundOne = 0;
    while (n > 0) 
    {
        if (n & 1) 
        {
            foundOne = 1;
            if (countZeros > maxZeros) 
            {
                maxZeros = countZeros;
            }
            countZeros = 0;
        } else 
        {
            if (foundOne) 
            {
                countZeros++;
            }
        }
        n >>= 1;
    }
    return maxZeros;
}

void bubbleSortStrings(char* arr[], int size) {
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

int main() {
    int i;

    char* arr[] = {"cherry", "orange", "apple", "pear", "grape"};

    bubbleSortStrings(arr, 3);

    for (i = 0; i < 3; i++) 
    {
        printf("%s ", arr[i]);
    }

    return 0;
}

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int mergedArr[]) 
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

int convertLittleToBigOrBigToLittle(int num)
{
    return (((num & 0x0000FFFF) << 16) | ((num & 0xFFFF0000) >> 16));
}

int convertBigToLittle(int num)
{
    return (((num & 0x0000FFFF) >> 16) | ((num & 0xFFFF0000) << 16));
}

void merge(int arr1[], int n1, int arr2[], int n2, int arr3[])
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

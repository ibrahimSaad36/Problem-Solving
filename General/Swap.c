#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swapTwoArrays(int a[], int b[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        *(a + i) = *(a + i) + *(b + i);
        *(b + i) = *(a + i) - *(b + i);
        *(a + i) = *(a + i) - *(b + i);
    }
}

void swapTwoInt1(int* a, int* b)
{
    *a = (*a + *b) - (*b = *a);
}

void swapTwoInt2(int* a, int* b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void swapTwoInt3(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapPointersToInt(int** a, int** b)
{
    int* temp = *a;
    *a = *b;
    *b = temp;
}

void genericSwap(void* a, void* b, size_t size)
{
    void* temp = malloc(size);
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
    free(temp);
}

int main() {
    int a = 5, b = 6;
    int* p1 = &a, *p2 = &b;
    printf("Before >> p1: %p, p2: %p\n", p1, p2);
    swapPointersToInt(&p1, &p2);
    printf("After >> p1: %p, p2: %p\n", p1, p2);

    printf("Before >> a: %d, b: %d\n", a, b);
    swap(&a, &b);
    printf("After >> a: %d, b: %d\n", a, b);

    return 0;
}
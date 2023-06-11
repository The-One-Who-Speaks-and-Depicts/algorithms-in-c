#include <stdio.h>

#include "insertion_sort.h"


int main (int argc, char *argv[]) {
    printf("Type a number of elements in array.\n");
	int length;
	scanf("%d", &length);
	int arrayToTransfer[length];
    printf("Type the first element in array.\n");
    int el;
    scanf("%d", &el);
    arrayToTransfer[0] = el;
    printf("First element of array is %d.\n", el);
	for (int i = 1; i < length; i++) {
        printf("Type the next element of array.\n");
        int el;
        scanf("%d", &el);
        printf("The next element of array is %d.\n", el);
        arrayToTransfer[i] = el;
    }
    insertionSort(arrayToTransfer, length);
    for (int i = 0; i < length; i++) {
        printf("The element %d of sorted array equals to %d.\n", i, arrayToTransfer[i]);
    }
    return 0;
}
#include <stdio.h>
#include "../utils/utils.h"

#include "selection_sort.h"

void selectionSort(int originalArray[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int smallest = i;
        for (int j = i + 1; j < size; j++) {
           if (originalArray[j] < originalArray[smallest]) {
            smallest = j;
           }
        }
        swapElementsInArray(originalArray, size, i, smallest);
    }
}
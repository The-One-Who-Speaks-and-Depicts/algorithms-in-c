#include <stdio.h>

#include "insertion_sort.h"

void insertionSort(int originalArray[], int size) {
    for (int i = 1; i < size; i++) {
        int key = originalArray[i];
        int j = i - 1;
        while (j >= 0 && originalArray[j] > key) {
            originalArray[j + 1]= originalArray[j];
            j = j - 1;
        }
        originalArray[j + 1] = key;
    }
}
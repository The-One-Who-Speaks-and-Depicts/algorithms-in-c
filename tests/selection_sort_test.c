#include <stdio.h>
#include "assert.h"

#include "../src/selection_sort/selection_sort.h"

void sortedArray_returnedAsIs() {
    int array[] = {0, 1, 2, 3, 4};
    int size = sizeof(array)/sizeof(array[0]);
    int sortedArray[] = {0, 1, 2, 3, 4};
    
    selectionSort(array, size);

    for (int i = 0; i < size; i++) {
        assert(array[i] == sortedArray[i]);
    }
}

void reversedArray_returnedAsSorted() {
    int array[] = {4, 3, 2, 1, 0};
    int size = sizeof(array)/sizeof(array[0]);
    int sortedArray[] = {0, 1, 2, 3, 4};   
    
    selectionSort(array, size);

    for (int i = 0; i < size; i++) {
        assert(array[i] == sortedArray[i]);
    }
}

void pyramidArray_returnedAsSorted() {
    int array[] = {4, 2, 0, 1, 3};
    int size = sizeof(array)/sizeof(array[0]);
    int sortedArray[] = {0, 1, 2, 3, 4};

    selectionSort(array, size);
    for (int i = 0; i < size; i++) {
        assert(array[i] == sortedArray[i]);
    }

}

int main(int argc, char *argv[]) {
    sortedArray_returnedAsIs();
    reversedArray_returnedAsSorted();
    pyramidArray_returnedAsSorted();

    
    printf("Selection sort tests passed!\n");
    return 0;
}
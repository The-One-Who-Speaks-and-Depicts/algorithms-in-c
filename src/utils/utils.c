#include <stdio.h>
#include "utils.h"

void swapElementsInArray(int array[], int size, int i, int j) {
    if (i == j) {
        return;
    }
    if ((i > size - 1) || (j > size - 1)) {
        return;
    }
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
    return;
}
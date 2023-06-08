#include <stdio.h>

#include "binary_search.h"

int binarySearch(int originalArray[], int arrayLength, int lengthToSearch, int valueToSearch) {
    if (lengthToSearch > arrayLength) {
        return -1;
    }
    int initial = 0;
    int final = lengthToSearch - 1;
    while (final >= initial) {
        int result = initial + (final - initial) / 2;
        if (originalArray[result] == valueToSearch) {
            return result;
        }
        else if (originalArray[result] < valueToSearch) {
            initial = result + 1;
        }
        else {
            final = result - 1;
        }
    }
    return -1;
}
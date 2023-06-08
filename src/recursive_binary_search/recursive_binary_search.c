#include <stdio.h>

int recursiveBinarySearch(int originalArray[], int initial, int final, int valueToSearch) {
    if (initial > final) {
        return -1;
    }
    int result = initial + (final - initial) / 2;
    if (originalArray[result] == valueToSearch) {
        return result;
    }
    else if (originalArray[result] < valueToSearch) {
        return recursiveBinarySearch(originalArray, result + 1, final, valueToSearch);
    }
    else {
        return recursiveBinarySearch(originalArray, initial, result - 1, valueToSearch);
    } 
}
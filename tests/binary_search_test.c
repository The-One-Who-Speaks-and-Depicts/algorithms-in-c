#include "../src/binary_search/binary_search.h"
#include "assert.h"
#include <stdio.h>

void lengthIsMoreThanArraySize() {
    int originalArray[] = {0, 1, 2, 3, 4};
    int lengthToSearch = 6;
    int size = sizeof(originalArray)/sizeof(originalArray[0]);
    int value = 7;

    int result = binarySearch(originalArray, size, lengthToSearch, value);

    assert(-1 == result);
}

void elementIsOutOfLengthBounds() {
    int originalArray[] = {0, 1, 2, 3, 4};
    int lengthToSearch = 3;
    int size = sizeof(originalArray)/sizeof(originalArray[0]);
    int value = 4;

    int result = binarySearch(originalArray, size, lengthToSearch, value);

    assert(-1 == result);
}

void absentElement() {
    int originalArray[] = {0, 1, 2, 3, 4};
    int lengthToSearch = 5;
    int size = sizeof(originalArray)/sizeof(originalArray[0]);
    int value = 7;

    int result = binarySearch(originalArray, size, lengthToSearch, value);

    assert(-1 == result);
}

void correctElementIsLast() {
    int originalArray[] = {0, 1, 2, 3, 4};
    int size = sizeof(originalArray)/sizeof(originalArray[0]);
    int lengthToSearch = size;
    int value = 4;

    int result = binarySearch(originalArray, size, lengthToSearch, value);

    assert(4 == result);
}

void correctElementIsFirst() {
    int originalArray[] = {0, 1, 2, 3, 4};
    int lengthToSearch = 5;
    int size = sizeof(originalArray)/sizeof(originalArray[0]);
    int value = 0;

    int result = binarySearch(originalArray, size, lengthToSearch, value);

    assert(0 == result);
}

void correctElementIsBetween() {
    int originalArray[] = {0, 1, 2, 3, 4};
    int size = sizeof(originalArray)/sizeof(originalArray[0]);
    int lengthToSearch = 5;
    int value = 2;

    int result = binarySearch(originalArray, size, lengthToSearch, value);

    assert(2 == result);
}

void correctElementIsLeftBetween() {
    int originalArray[] = {0, 1, 2, 3, 4, 5};
    int lengthToSearch = 6;
    int size = sizeof(originalArray)/sizeof(originalArray[0]);
    int value = 2;

    int result = binarySearch(originalArray, size, lengthToSearch, value);

    assert(2 == result);
}

void correctElementIsRightBetween() {
    int originalArray[] = {0, 1, 2, 3, 4, 5};
    int lengthToSearch = 6;
    int size = sizeof(originalArray)/sizeof(originalArray[0]);
    int value = 3;

    int result = binarySearch(originalArray, size, lengthToSearch, value);

    assert(3 == result);
}

int main (int argc, char *argv[]) {
    lengthIsMoreThanArraySize();
    elementIsOutOfLengthBounds();
    absentElement();
    correctElementIsLast();
    correctElementIsFirst();
    correctElementIsBetween();
    correctElementIsLeftBetween();
    correctElementIsRightBetween();

    printf("Binary search tests passed!\n");
    return 0;
}
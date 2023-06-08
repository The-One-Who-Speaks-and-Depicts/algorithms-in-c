#include <stdio.h>
#include "../src/recursive_binary_search/recursive_binary_search.h"
#include "assert.h"

void initialIsMoreThanEnding() {
    int originalArray[] = {0, 1, 2, 3, 4};
    int size = sizeof(originalArray)/sizeof(originalArray[0]);
    int value = 7;

    int result = recursiveBinarySearch(originalArray, 8, size, value);

    assert(-1 == result);

}

void absentElement() {
    int originalArray[] = {0, 1, 2, 3, 4};
    int size = sizeof(originalArray)/sizeof(originalArray[0]);
    int value = 7;

    int result = recursiveBinarySearch(originalArray, 0, size, value);

    assert(-1 == result);
}

void correctElementIsLast() {
    int originalArray[] = {0, 1, 2, 3, 4};
    int size = sizeof(originalArray)/sizeof(originalArray[0]);
    int value = 4;

    int result = recursiveBinarySearch(originalArray, 0, size, value);

    assert(4 == result);
}

void correctElementIsFirst() {
    int originalArray[] = {0, 1, 2, 3, 4};
    int size = sizeof(originalArray)/sizeof(originalArray[0]);
    int value = 0;

    int result = recursiveBinarySearch(originalArray, 0, size, value);

    assert(0 == result);
}

void correctElementIsBetween() {
    int originalArray[] = {0, 1, 2, 3, 4};
    int size = sizeof(originalArray)/sizeof(originalArray[0]);
    int value = 2;

    int result = recursiveBinarySearch(originalArray, 0, size, value);

    assert(2 == result);
}

void correctElementIsLeftBetween() {
    int originalArray[] = {0, 1, 2, 3, 4, 5};
    int size = sizeof(originalArray)/sizeof(originalArray[0]);
    int value = 2;

    int result = recursiveBinarySearch(originalArray, 0, size, value);

    assert(2 == result);
}

void correctElementIsRightBetween() {
    int originalArray[] = {0, 1, 2, 3, 4, 5};
    int size = sizeof(originalArray)/sizeof(originalArray[0]);
    int value = 3;

    int result = recursiveBinarySearch(originalArray, 0, size, value);

    assert(3 == result);
}

int main(int argc, char *argv[]) {
    initialIsMoreThanEnding();
    absentElement();
    correctElementIsLast();
    correctElementIsFirst();
    correctElementIsBetween();
    correctElementIsLeftBetween();
    correctElementIsRightBetween();

    printf("Recursive binary search tests passed!\n");
    return 0;
}
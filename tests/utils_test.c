#include <stdio.h>
#include "assert.h"
#include "../src/utils/utils.h"

void iEqualsJ() {
    int array[] = {0, 1, 2, 3};
    int i = 0;
    int j = 0;

    int resultArray[] = {0, 1, 2, 3};
    swapElementsInArray(array, sizeof(array)/sizeof(array[0]), i, j);

    for (int k = 0; k < sizeof(array)/sizeof(array[0]); k++) {
        assert(resultArray[k] == array[k]);
    }
}

void iIsBiggerThanSize() {
    int array[] = {0, 1, 2, 3};
    int i = 4;
    int j = 0;

    int resultArray[] = {0, 1, 2, 3};
    swapElementsInArray(array, sizeof(array)/sizeof(array[0]), i, j);

    for (int k = 0; k < sizeof(array)/sizeof(array[0]); k++) {
        assert(resultArray[k] == array[k]);
    }
}

void jIsBiggerThanSize() {
    int array[] = {0, 1, 2, 3};
    int i = 0;
    int j = 25;

    int resultArray[] = {0, 1, 2, 3};
    swapElementsInArray(array, sizeof(array)/sizeof(array[0]), i, j);

    for (int k = 0; k < sizeof(array)/sizeof(array[0]); k++) {
        assert(resultArray[k] == array[k]);
    }
}

void correctIAndJ_ValueChanged() {
    int array[] = {0, 1, 2, 3};
    int i = 0;
    int j = 1;

    int resultArray[] = {1, 0, 2, 3};
    swapElementsInArray(array, sizeof(array)/sizeof(array[0]), i, j);

    for (int k = 0; k < sizeof(array)/sizeof(array[0]); k++) {
        assert(resultArray[k] == array[k]);
    }
}

int main(int argc, char *argv[]) {
    
    iEqualsJ();
    iIsBiggerThanSize();
    jIsBiggerThanSize();
    correctIAndJ_ValueChanged();

    printf("Utils tests passed!\n");
    return 0;
}
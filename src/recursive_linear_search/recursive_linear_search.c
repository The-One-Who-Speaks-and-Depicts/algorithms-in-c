#include <stdio.h>
#include "recursive_linear_search.h"

int recursiveLinearSearch(int originalArray[], int lengthToSearch, int numberToSplit, int valueToSearch) {
    int size = 0;
    while (originalArray[size]) {
        size++;
    }
    if (size < lengthToSearch) {
		return -1;
	}
    if (numberToSplit >= size) {
        return -1;
    }
    if (numberToSplit > lengthToSearch) {
        return -1;
    }\
    if (originalArray[numberToSplit] == valueToSearch) {
        return numberToSplit;
    }
    numberToSplit = numberToSplit + 1;
    return recursiveLinearSearch(originalArray, lengthToSearch, numberToSplit, valueToSearch);
    

}
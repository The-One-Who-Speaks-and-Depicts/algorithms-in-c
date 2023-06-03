#include <stdio.h>
#include "sentinel_linear_search.h"

int sentinelLinearSearch(int originalArray[], int lengthToSearch, int valueToSearch) {
	int size = 0;
	while (originalArray[size]) {
		size++;
	}
	if (size < lengthToSearch) {
		return -1;
	}
	int last = originalArray[lengthToSearch - 1];
	originalArray[lengthToSearch - 1] = valueToSearch;
	int iterator = 0;
	while(originalArray[iterator] != valueToSearch && iterator < lengthToSearch) {
		iterator++;
	}
	originalArray[lengthToSearch - 1] = last;
	if (iterator < (lengthToSearch - 1) || originalArray[lengthToSearch - 1] == valueToSearch) {
		return iterator;
	}
	return -1;
}
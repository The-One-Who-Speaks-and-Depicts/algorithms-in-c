#include <stdio.h>
#include "better_linear_search.h"

int betterLinearSearch(int originalArray[], int lengthToSearch, int valueToSearch) {
	int size = sizeof(originalArray) / sizeof(originalArray[0]);
	if (size < lengthToSearch) {
		return -1;
	}
	for (int i = 0; i < lengthToSearch; i++) {
		if (originalArray[i] == valueToSearch) {
			return i;
		}
	}
	return -1;
}
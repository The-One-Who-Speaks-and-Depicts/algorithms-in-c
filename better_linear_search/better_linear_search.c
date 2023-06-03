#include <stdio.h>
#include "better_linear_search.h"

int betterLinearSearch(int originalArray[], int lengthToSearch, int valueToSearch) {
	int size = 0;
	while (originalArray[size]) {
		size++;
	}
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
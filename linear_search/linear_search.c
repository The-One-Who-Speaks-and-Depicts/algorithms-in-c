#include <stdio.h>
#include "linear_search.h"

int linearSearch(int originalArray[], int lengthToSearch, int valueToSearch) {
	int answer = -1;
	int size = sizeof(originalArray) / sizeof(originalArray[0]);
	if (size < lengthToSearch) {
		return answer;
	}
	for (int i = 0; i < lengthToSearch; i++) {
		if (originalArray[i] == valueToSearch) {
			answer = i;
			break;
		}
	}
	return answer;
}
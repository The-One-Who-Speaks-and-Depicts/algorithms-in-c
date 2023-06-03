#include <stdio.h>
#include "linear_search.h"

int linearSearch(int originalArray[], int lengthToSearch, int valueToSearch) {
	int answer = -1;
	int size = 0;
	while (originalArray[size]) {
		size++;
	}
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
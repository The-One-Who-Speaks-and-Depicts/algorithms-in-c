#include <stdio.h>
#include <stdlib.h>
#include "recursive_linear_search.h"

int main() {
	printf("Type a number of elements in array.\n");
	int length;
	scanf("%d", &length);
	int arrayToTransfer[length];
	for (int i = 0; i < length; i++) {
		printf("Type next number in array\n");
		int el;
		scanf("%d", &el);
		arrayToTransfer[i] = el;
	}
	int searchedNumber;
	printf("Type the number you want to search for:\n");
	scanf("%d", &searchedNumber);
	int lengthToSearch;
	printf("How many numbers do you want to go through?\n");
	scanf("%d", &lengthToSearch);
	if (lengthToSearch > length) {
		printf("You want to go through too much elements, reducing to the maximum length.\n");
		lengthToSearch = length;
	}
	int splitValue;
	printf("From which number do you want to start?\n");
	scanf("%d", &splitValue);
	if (splitValue > length) {
		printf("Split value is too big. Exiting... \n");
		exit(1);
	}
	int foundNumber = recursiveLinearSearch(arrayToTransfer, lengthToSearch, splitValue, searchedNumber);
	if (foundNumber > - 1) {
		printf("Index of number %d is %d.\n", searchedNumber, foundNumber);
	}
	else {
		printf("No such number as %d!\n", searchedNumber);
	}
	return 0;
}

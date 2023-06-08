#include <stdio.h>
#include "assert.h"
#include "recursive_binary_search.h"

int main (int argc, char *argv[]) {
    printf("Type a number of elements in array.\n");
	int length;
	scanf("%d", &length);
	int arrayToTransfer[length];
    printf("Type first \n");
    int el;
    scanf("%d", &el);
    arrayToTransfer[0] = el;
	for (int i = 1; i < length; i++) {
        while (1) {
            printf("Type next number in array. It should be bigger than the previous one.\n");
            int el;
            scanf("%d", &el);
            if (el > arrayToTransfer[i -1]) {
                printf("Next number is %d\n", el);
                arrayToTransfer[i] = el;
                break;
            }
            printf("There was an error, please, try again.\n");
        }
    }
	int searchedNumber;
	printf("Type the number you want to search for:\n");
	scanf("%d", &searchedNumber);
	int foundNumber = recursiveBinarySearch(arrayToTransfer, 0, sizeof(arrayToTransfer)/sizeof(arrayToTransfer[0]), searchedNumber);
	if (foundNumber > - 1) {
		printf("Index of number %d is %d.\n", searchedNumber, foundNumber);
	}
	else {
		printf("No such number as %d!\n", searchedNumber);
	}
	return 0;
}
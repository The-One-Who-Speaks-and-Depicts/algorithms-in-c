# include <stdio.h>
# include "../src/recursive_linear_search/recursive_linear_search.h"
# include "assert.h"

void value_not_found() {
	int array[] = {1, 2, 3, 4};
	int len = 2;
    int split = 0;
	int val = 4;
	int result = recursiveLinearSearch(array, len, split, val);
	assert(-1 == result);
}

void length_is_too_big() {
	int array[] = {1, 2, 3, 4};
	int len = 88;
	int val = 77;
    int split = 4;
	int result = recursiveLinearSearch(array, len, split, val);
	assert(-1 == result);
}

void value_too_early() {
    int array[] = {1, 2, 3, 4};
	int len = 4;
    int split = 2;
	int val = 1;
	int result = recursiveLinearSearch(array, len, split, val);
	assert(-1 == result);
}

void searched_value_in_array() {
	int array[] = {1, 2, 3, 4};
	int len = 4;
	int val = 2;
    int split = 0;
	int result = recursiveLinearSearch(array, len, split, val);
	assert(1 == result);
}

int main(int argc, char *argv[]) {
	value_not_found();
	length_is_too_big();
    value_too_early();
	searched_value_in_array();

	printf("Recursive linear search tests passed!\n");
	
	return 0;
}


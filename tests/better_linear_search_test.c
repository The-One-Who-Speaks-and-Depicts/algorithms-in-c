# include <stdio.h>
# include "../src/better_linear_search/better_linear_search.h"
# include "assert.h"

void value_not_found() {
	int array[] = {1, 2, 3, 4};
	int len = 2;
	int val = 4;
	int result = betterLinearSearch(array, len, val);
	assert(-1 == result);
}

void length_is_too_big() {
	int array[] = {1, 2, 3, 4};
	int len = 88;
	int val = 77;
	int result = betterLinearSearch(array, len, val);
	assert(-1 == result);
}

void everything_is_correct() {
	int array[] = {1, 2, 3, 4};
	int len = 2;
	int val = 1;
	int result = betterLinearSearch(array, len, val);
	assert(0 == result);
}

int main(int argc, char *argv[]) {
	value_not_found();
	length_is_too_big();
	everything_is_correct();

	printf("Better linear search tests passed!\n");
	
	return 0;
}


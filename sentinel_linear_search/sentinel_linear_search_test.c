# include <stdio.h>
# include "sentinel_linear_search.h"
# include "assert.h"

void value_not_found() {
	int array[] = {1, 2, 3, 4};
	int len = 2;
	int val = 4;
	int result = sentinelLinearSearch(array, len, val);
	assert(-1 == result);
}

void length_is_too_big() {
	int array[] = {1, 2, 3, 4};
	int len = 88;
	int val = 77;
	int result = sentinelLinearSearch(array, len, val);
	assert(-1 == result);
}

void searched_value_in_array() {
	int array[] = {1, 2, 3, 4};
	int len = 4;
	int val = 2;
	int result = sentinelLinearSearch(array, len, val);
	assert(1 == result);
}

void searched_value_is_last_value_of_array() {
	int array[] = {1, 2, 3, 4};
	int len = 4;
	int val = 4;
	int result = sentinelLinearSearch(array, len, val);
	assert(3 == result);
}

int main(int argc, char *argv[]) {
	value_not_found();
	length_is_too_big();
	searched_value_in_array();
	searched_value_is_last_value_of_array();

	printf("Tests passed!\n");
	
	return 0;
}


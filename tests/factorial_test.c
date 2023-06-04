#include <stdio.h>
#include "../src/factorial/factorial.h"
#include "assert.h"

void negativeFactorial_shouldThrow() {
    int originalNumber = -1;
    int result = factorial(originalNumber);
    assert(-1 == result);
}

void zero_shouldReturnOne () {
    int originalNumber = 0;
    int result = factorial(originalNumber);
    assert(1 == result);
}

void one_shouldReturnOne () {
    int originalNumber = 0;
    int result = factorial(originalNumber);
    assert(1 == result);
}
void positive_shouldReturnFactorial () {
    int originalNumber = 5;
    int result = factorial(originalNumber);
    assert(120 == result);
}


int main(int argc, char *argv[]) {
    negativeFactorial_shouldThrow();
    zero_shouldReturnOne();
    one_shouldReturnOne;
    positive_shouldReturnFactorial();

    printf("Factorial tests passed!\n");    
    return 0;
}
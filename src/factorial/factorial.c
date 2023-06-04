#include <stdio.h>
#include "factorial.h"


int factorial (int originalNumber) {
    if (originalNumber < 0) {
        return -1;
    }
    if (originalNumber == 0 || originalNumber == 1) {
        return 1;
    }
    return originalNumber * factorial(originalNumber - 1);

}
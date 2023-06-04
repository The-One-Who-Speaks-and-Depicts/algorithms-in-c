#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "factorial.h"

int main(int argc, char *argv[]) {

    // number insertion with https://sekrit.de/webdocs/c/beginners-guide-away-from-scanf.html

    int number;
    char buf[1024]; // use 1KiB just to be sure
    int success; // flag for successful conversion

    do
    {
        printf("Enter a number for factorial: ");
        if (!fgets(buf, 1024, stdin))
        {
            // reading input failed:
            return 1;
        }

        // have some input, convert it to integer:
        char *endptr;

        errno = 0; // reset error number
        number = strtol(buf, &endptr, 10);
        if (errno == ERANGE)
        {
            printf("Sorry, this number is too small or too large.\n");
            success = 0;
        }
        else if (endptr == buf)
        {
            // no character was read
            success = 0;
        }
        else if (*endptr && *endptr != '\n')
        {
            // *endptr is neither end of string nor newline,
            // so we didn't convert the *whole* input
            success = 0;
        }
        else
        {
            success = 1;
        }
    } while (!success); // repeat until we got a valid number


    int result = factorial(number);
    if (result == -1) {
        printf("Negative value as input, exiting...\n");
        exit(-1);
    }
    printf("%d! is %d.\n", number, result);
    return 1;
}
#include <stdio.h>

int main(int argc, char* argv[]) {
    int a;
    int *ptr_to_a;

    ptr_to_a = &a;

    a = 5;
    printf("The value of a is %d\n", a);

    *ptr_to_a = 6;
    printf("The value of a is %d\n", a);
    printf("The value of ptr_to_a is %n\n", ptr_to_a);
    printf("It stores the value %d\n", *ptr_to_a);
    printf("The address of a is %n\n", &a);

    // void pointers
    int intval = 255958283;
    void *vptr = &intval;

    printf("The value at vptr as an int is %d\n", *((int *) vptr));
    printf("The value at vptr as a char is %d\n", *((char *) vptr));

    return 0;
}
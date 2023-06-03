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
    return 0;
}
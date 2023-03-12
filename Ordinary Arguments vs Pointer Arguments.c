#include <stdio.h>

// Function that takes an integer by value
void increment(int x) {
    x++;
    printf("Inside increment: x = %d\n", x);
}

// Function that takes an integer by reference
void increment_by_reference(int *x) {
    (*x)++;
    printf("Inside increment_by_reference: *x = %d\n", *x);
}

int main() {
    int a = 10;
    int *b = &a;

    printf("Before increment: a = %d\n", a);
    increment(a);
    printf("After increment: a = %d\n", a);

    printf("Before increment_by_reference: *b = %d\n", *b);
    increment_by_reference(b);
    printf("After increment_by_reference: *b = %d\n", *b);

    return 0;
}


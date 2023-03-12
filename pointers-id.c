#include <stdio.h>
#include <stdint.h>
int main() {
    double my_double;
    int my_int;
    char my_char;

    printf("Enter a double: ");
    scanf("%lf", &my_double);
    printf("Enter an int: ");
    scanf("%d", &my_int);
    printf("Enter a char: ");
    scanf(" %c", &my_char);

    double *my_double_ptr = &my_double;
    int *my_int_ptr = &my_int;
    char *my_char_ptr = &my_char;

    printf("Address of my_double: 0x%x\n", (unsigned int)my_double_ptr);
    printf("Value of my_double: %f\n", *my_double_ptr);
    printf("Size of my_double: %zu bytes\n", sizeof(my_double));

    printf("Address of my_int: 0x%x\n", (unsigned int)my_int_ptr);
    printf("Value of my_int: %d\n", *my_int_ptr);
    printf("Size of my_int: %zu bytes\n", sizeof(my_int));

    printf("Address of my_char: 0x%x\n", (unsigned int)my_char_ptr);
    printf("Value of my_char: %c\n", *my_char_ptr);
    printf("Size of my_char: %zu bytes\n", sizeof(my_char));

    return 0;
}

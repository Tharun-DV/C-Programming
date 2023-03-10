#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char* s) {
    // Remove non-alphanumeric characters and convert to lowercase
    char cleaned[strlen(s) + 1];
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (isalnum(s[i])) {
            cleaned[j++] = tolower(s[i]);
        }
    }
    cleaned[j] = '\0';

    // Check if cleaned string is a palindrome
    int len = strlen(cleaned);
    for (int i = 0; i < len / 2; i++) {
        if (cleaned[i] != cleaned[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    char s[100];
    printf("Enter a string: ");
    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = '\0'; // remove newline character from input

    if (isPalindrome(s)) {
        printf("%s is a palindrome\n", s);
    } else {
        printf("%s is not a palindrome\n", s);
    }

    return 0;
}

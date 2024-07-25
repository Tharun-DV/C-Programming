#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1000

// Function to convert a string to lowercase
void toLowerCase(char* str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

// Function to check if a word is already in the list
int isWordInList(char words[][MAX_LEN], char* word, int wordCount) {
    char temp[MAX_LEN];
    strcpy(temp, word);
    toLowerCase(temp);
    
    for (int i = 0; i < wordCount; i++) {
        char existingWord[MAX_LEN];
        strcpy(existingWord, words[i]);
        toLowerCase(existingWord);
        if (strcmp(existingWord, temp) == 0) {
            return 1;
        }
    }
    return 0;
}

void removeRepeatingWords(char* input) {
    char words[MAX_LEN][MAX_LEN];
    int wordCount = 0;
    char* token = strtok(input, " ");

    while (token != NULL) {
        if (!isWordInList(words, token, wordCount)) {
            strcpy(words[wordCount], token);
            wordCount++;
        }
        token = strtok(NULL, " ");
    }

    // Print the result
    for (int i = 0; i < wordCount; i++) {
        if (i > 0) printf(" ");
        printf("%s", words[i]);
    }
    printf("\n");
}

int main() {
    char input[MAX_LEN];

    printf("Enter a string: ");
    fgets(input, MAX_LEN, stdin);

    // Remove the newline character from fgets input
    input[strcspn(input, "\n")] = 0;

    removeRepeatingWords(input);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sort(char** names, int n);

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    char** names = (char**)malloc(n * sizeof(char*));
    for (int i = 0; i < n; i++) {
    printf("Enter the names of %d students:",i);
    names[i] = (char*)malloc(50 * sizeof(char));
     scanf("%s", names[i]);
    }
    int swaps = sort(names, n);
    printf("The sorted names are:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    printf("Number of swaps needed: %d\n", swaps);
    for (int i = 0; i < n; i++) {
        free(names[i]);
    }
    free(names);
    return 0;
}

int sort(char** names, int n) {
    int swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                // swap names[i] and names[j]
                char* temp = names[i];
                names[i] = names[j];
                names[j] = temp;
                swaps++;
            }
        }
    }
    return swaps;
}


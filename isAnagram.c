#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    int count[256] = {0};
    int len1 = strlen(s);
    int len2 = strlen(t);
    
    if(len1 != len2) {
        return false;
    }
    
    for(int i=0; i<len1; i++) {
        count[s[i]]++;
        count[t[i]]--;
    }
    
    for(int i=0; i<256; i++) {
        if(count[i] != 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    char s[100], t[100];
    
    printf("Enter the first string: ");
    scanf("%s", s);
    
    printf("Enter the second string: ");
    scanf("%s", t);
    
    if(isAnagram(s, t)) {
        printf("The second string is an anagram of the first string.");
    } else {
        printf("The second string is not an anagram of the first string.");
    }
    
    return 0;
}


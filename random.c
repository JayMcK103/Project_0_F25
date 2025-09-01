
#include <stdio.h>
#include <stdlib.h>

void rand_string(char *s, size_t size) {
    static const char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

    for(size_t i = 0; i < size; i++) {
        int letter = rand() % (sizeof(alphabet) - 1);
        s[i] = alphabet[letter];
    }
    s[size] = '\0';
}


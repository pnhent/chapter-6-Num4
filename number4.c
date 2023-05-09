#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void swapChars(char *ch1, char *ch2) {
    char tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}

int main() {
    srand(time(NULL));
    char input[] = "abcd";
    int length = strlen(input);

    printf("Original string: %s\n", input);

    for (int i = 0; i < length; i++) {
        int randomIndex = rand() % length;
        swapChars(&input[i], &input[randomIndex]);
    }

    printf("Randomized string: %s\n", input);

    return 0;
}
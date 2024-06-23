#include <stdio.h>
#include <string.h>

void readOutOfBounds(char *input) {
    char buffer[10];
    strcpy(buffer, input);

    // Чтение за пределами массива
    for (int i = 0; i <= 10; i++) {
        printf("%c ", buffer[i]);
    }
    printf("\n");
}

int main() {
    char input[] = "1234567890ABCDE";
    readOutOfBounds(input);
    return 0;
}

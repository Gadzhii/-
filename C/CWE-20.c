#include <stdio.h>
#include <string.h>

void copy_input(char *input) {
    char buffer[10];
    strcpy(buffer, input);  // Потенциальное переполнение буфера
    printf("Input: %s\n", buffer);
}

int main() {
    char input[100];
    printf("Enter input: ");
    scanf("%99s", input);
    copy_input(input);
    return 0;
}

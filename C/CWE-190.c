#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int num_imgs;
    printf("Enter the number of images: ");
    scanf("%u", &num_imgs);

    // Vulnerable: Potential integer overflow
    size_t total_size = num_imgs * 10000;
    char *buffer = (char *)malloc(total_size);

    if (buffer == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Simulated use of the buffer
    for (unsigned int i = 0; i < total_size; i++) {
        buffer[i] = 'A';
    }

    printf("Buffer allocated and used successfully!\n");
    free(buffer);
    return 0;
}

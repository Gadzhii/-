//Пример 1: Запись за пределы статического массива
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void out_of_bounds_write() {
    int arr[5];
    for (int i = 0; i <= 5; i++) { // Ошибка: запись за пределы массива
        arr[i] = i;
    }
}

int main() {
    out_of_bounds_write();
    return 0;
}

void out_of_bounds_writee() {
    int *arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Ошибка выделения памяти\n");
        return;
    }
    for (int i = 0; i <= 5; i++) { // Ошибка: запись за пределы массива
        arr[i] = i;
    }
    free(arr);
}

int main() {
    out_of_bounds_writee();
    return 0;
}

#include <stdio.h>
#include <string.h>

int returnChunkSize(void *chunk) {
    // Implementation of returnChunkSize function
    // This is a placeholder. Implement the actual logic as needed.
    if (chunk != NULL) {
        // Assume some valid chunk size for demonstration
        return 1024; 
    } else {
        return -1;
    }
}

int main() {
    char srcBuf[1024] = "This is a test string.";
    char destBuf[1024];

    int chunkSize = returnChunkSize(destBuf);
    if (chunkSize > 0) {
        memcpy(destBuf, srcBuf, chunkSize - 1);
        destBuf[chunkSize - 1] = '\0'; // Ensure null termination
        printf("Copied string: %s\n", destBuf);
    } else {
        printf("Error: Invalid chunk size.\n");
    }

    return 0;
}
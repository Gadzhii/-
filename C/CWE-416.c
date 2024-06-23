#include <stdio.h>
#include <stdlib.h>

void use_after_free() {
    int *ptr = (int *)malloc(sizeof(int) * 10);
    if (ptr == NULL) {
        printf("Ошибка выделения памяти\n");
        return;
    }
    
    free(ptr); // Освобождение памяти

    ptr[0] = 42; // Использование памяти после освобождения (Use After Free)
    printf("Первый элемент: %d\n", ptr[0]);
}

int main() {
    use_after_free();
    return 0;
}

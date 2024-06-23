#include <stdio.h>
#include <string.h>

int main() {
    char buffer[10];
    // Имитация ненадежного ввода (может поступать от пользователя или внешнего источника)
    char *untrusted_input = "This input is way too long for the buffer";
    
    // Уязвимый код: копирование ненадежного ввода в буфер без проверки границ
    strcpy(buffer, untrusted_input);
    
    // Пример использования буфера
    printf("Buffer content: %s\n", buffer);

    return 0;
}

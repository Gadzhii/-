#include <iostream>
#include <cstring>

int main() {
    char buffer[10];
    // Имитация ненадежного ввода (может поступать от пользователя или внешнего источника)
    char untrusted_input[] = "This input is way too long for the buffer";
    
    // Уязвимый код: копирование ненадежного ввода в буфер без проверки границ
    strcpy(buffer, untrusted_input);
    
    // Пример использования буфера
    std::cout << "Buffer content: " << buffer << std::endl;

    return 0;
}

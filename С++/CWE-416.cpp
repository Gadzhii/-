#include <iostream>

void use_after_free() {
    int *ptr = new int[10];
    if (ptr == nullptr) {
        std::cout << "Ошибка выделения памяти" << std::endl;
        return;
    }
    
    delete[] ptr; // Освобождение памяти

    ptr[0] = 42; // Использование памяти после освобождения (Use After Free)
    std::cout << "Первый элемент: " << ptr[0] << std::endl;
}

int main() {
    use_after_free();
    return 0;
}

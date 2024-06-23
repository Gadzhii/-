#include <iostream>

void dereference_null_pointer() {
    int *ptr = nullptr; // Указатель инициализирован нулем
    std::cout << *ptr << std::endl; // Попытка разыменования нулевого указателя
}

int main() {
    dereference_null_pointer();
    return 0;
}

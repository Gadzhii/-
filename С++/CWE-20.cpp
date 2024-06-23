#include <iostream>
#include <string>
#include <cstring>

void copy_input(const char *input) {
    char buffer[10];
    std::strcpy(buffer, input);  // Потенциальное переполнение буфера
    std::cout << "Input: " << buffer << std::endl;
}

int main() {
    std::string input;
    std::cout << "Enter input: ";
    std::cin >> input;
    copy_input(input.c_str());
    return 0;
}

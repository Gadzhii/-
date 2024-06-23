#include <iostream>
#include <cstdlib>
#include <string>

void executeCommand(const std::string &input) {
    // Уязвимая строка
    std::string command = "ls " + input;
    std::system(command.c_str());
}

int main() {
    std::string userInput;
    std::cout << "Введите директорию: ";
    std::getline(std::cin, userInput);
    executeCommand(userInput);
    return 0;
}

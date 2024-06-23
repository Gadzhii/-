#include <iostream>
#include <fstream>
#include <string>

void readFromFile(const std::string& filename) {
    std::string path = "/var/data/" + filename;  // Неправильное ограничение пути
    std::ifstream file(path);
    std::string line;
    
    if (file.is_open()) {
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
        file.close();
    } else {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
    }
}

int main() {
    std::string userInput;
    std::cout << "Enter filename to read: ";
    std::cin >> userInput;
    
    readFromFile(userInput);
    
    return 0;
}

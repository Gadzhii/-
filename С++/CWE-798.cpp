#include <iostream>
#include <string>

const std::string USERNAME = "admin";
const std::string PASSWORD = "password123";

bool authenticate(const std::string &username, const std::string &password) {
    if (username == USERNAME && password == PASSWORD) {
        return true; // Аутентификация успешна
    }
    return false; // Аутентификация не удалась
}

int main() {
    std::string username;
    std::string password;

    std::cout << "Введите имя пользователя: ";
    std::cin >> username;
    std::cout << "Введите пароль: ";
    std::cin >> password;

    if (authenticate(username, password)) {
        std::cout << "Доступ разрешен." << std::endl;
    } else {
        std::cout << "Доступ запрещен." << std::endl;
    }

    return 0;
}

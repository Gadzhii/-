#include <stdio.h>
#include <string.h>

#define USERNAME "admin"
#define PASSWORD "password123"

int authenticate(const char *username, const char *password) {
    if (strcmp(username, USERNAME) == 0 && strcmp(password, PASSWORD) == 0) {
        return 1; // Аутентификация успешна
    }
    return 0; // Аутентификация не удалась
}

int main() {
    char username[50];
    char password[50];

    printf("Введите имя пользователя: ");
    scanf("%s", username);
    printf("Введите пароль: ");
    scanf("%s", password);

    if (authenticate(username, password)) {
        printf("Доступ разрешен.\n");
    } else {
        printf("Доступ запрещен.\n");
    }

    return 0;
}

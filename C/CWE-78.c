#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char command[256];

    if (argc < 2) {
        printf("Usage: %s <command>\n", argv[0]);
        return 1;
    }

    // Некорректная нейтрализация специальных элементов
    // Использование пользовательского ввода напрямую в команду оболочки
    snprintf(command, sizeof(command), "ls %s", argv[1]);
    system(command);

    return 0;
}

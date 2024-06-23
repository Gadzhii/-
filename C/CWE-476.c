#include <stdio.h>

void dereference_null_pointer() {
    int *ptr = NULL; // Указатель инициализирован нулем
    printf("%d\n", *ptr); // Попытка разыменования нулевого указателя
}

int main() {
    dereference_null_pointer();
    return 0;
}

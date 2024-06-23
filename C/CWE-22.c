#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void process_file(const char *filename) {
    char buffer[256];
    char filepath[512] = "/var/data/";  // Assume restricted directory

    // Concatenate filename to the base directory
    strcat(filepath, filename);

    // Attempt to open the file
    FILE *file = fopen(filepath, "r");
    if (file) {
        // Read data from the file
        while (fgets(buffer, sizeof(buffer), file)) {
            printf("%s", buffer);
        }
        fclose(file);
    } else {
        printf("File not found or cannot be opened.\n");
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    process_file(argv[1]);

    return 0;
}

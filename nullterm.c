#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char buffer[10];  

    if (argc != 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }

    //Copy without null termination - unsafe!
    strncpy(buffer, argv[1], sizeof(buffer));
    printf("Without manual null termination: %s\n", buffer);

    //Copy with manual null termination
    strncpy(buffer, argv[1], sizeof(buffer) - 1);
    buffer[sizeof(buffer) - 1] = '\0';

    printf("With manual null termination: %s\n", buffer);

    return 0;
}

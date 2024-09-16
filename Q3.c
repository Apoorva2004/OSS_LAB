#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str) - 1; // Subtract 1 to exclude the newline character

    printf("Reversed string: ");
    for (int i = length; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

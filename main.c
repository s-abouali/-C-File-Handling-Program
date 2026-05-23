#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file;
    char text[100];
    file = fopen("example.txt", "w");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter some text: ");
    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);
    fclose(file);

    printf("Text written to file successfully.\n");

    file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    printf("\nReading from file:\n");

    while (fgets(text, sizeof(text), file) != NULL) {
        printf("%s", text);
    }

    fclose(file);

    return 0;
}

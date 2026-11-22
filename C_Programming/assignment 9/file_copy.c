#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char ch;

    // Open the source file in read mode ("r")
    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Error: Cannot open source.txt. Make sure the file exists.\n");
        return 1;
    }

    // Open the destination file in write mode ("w")
    destFile = fopen("destination.txt", "w");
    if (destFile == NULL) {
        printf("Error: Cannot create destination.txt.\n");
        fclose(sourceFile);
        return 1;
    }

    // Read one character at a time until End Of File (EOF) and copy it
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully!\n");

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}

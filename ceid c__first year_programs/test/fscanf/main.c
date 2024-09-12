#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *read = fopen("reading.txt", "r");
    if (read == NULL) {
        perror("Error opening file");
        return 1;
    }

    int num, arx;
    char onoma[30];

    // Adjust the format specifier to skip non-numeric parts
    fscanf(read, "order no:%d %s arxiko_kostos:%d", &num, onoma, &arx);

    // Print the values read from the file
    printf("Order Number: %d\nName: %s\nArxiko Kostos: %d\n", num, onoma, arx);

    fclose(read);

    return 0;
}

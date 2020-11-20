#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
        FILE *filename;
        char maracas;

        filename = fopen("yukitest/watdayfuk", "r");
        if (filename != NULL) {
                printf("Opened!\n");
        } else {
                printf("Could not open it\n");
                exit(-1);
        }

        maracas = fgetc(filename);
        do {
                maracas = fgetc(filename);
                printf("%c", maracas);

        } while (maracas != EOF);
        fclose(filename);
        return 0;
}

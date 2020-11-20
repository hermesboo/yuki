#include <stdio.h>
#include <stdlib.h>

void yuki(FILE *fname) {
        char maracas;
        maracas = fgetc(fname);
        do {
                printf("%c", maracas);
                maracas = fgetc(fname);
        } while (maracas != EOF);
}

int main(int argc, char **argv) {
        FILE *filename;
        int argnum;

        argnum = argc - (argc - 1);

        while (argnum < argc) {
                filename = fopen(argv[argnum], "r");
                if (filename == NULL) {
                        printf("Could not open!\n");
                }
                yuki(filename);
                fclose(filename);
                argnum++;
        }
        return 0;
}

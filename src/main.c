#include <stdio.h>
#include <stdlib.h>

void yuki(FILE *fp) {
        char actread;

        while ((actread = getc(fp) != EOF)) {
                printf("%c", actread);
        }
}

int main(int argc, char **argv) {
        FILE *filename;
        int argnum;

        printf("Argument Count: %d\n", argc);
        argnum = argc - 1;
        printf("Argnum: %d\n", argnum);
        do {
                filename = fopen(argv[argnum], "r");
                if (filename == NULL) {
                        printf("Error opening files");
                        exit(-1);
                }

                yuki(filename);
                fclose(filename);
                argnum++;
                printf("EOF\n");
        } while (argnum != argc);
        return 0;
}

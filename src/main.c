#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
        FILE *filename;

        filename = fopen(argv[1], "r");
        if (filename != NULL) {
                printf("Opened!\n");
        } else {
                printf("Could not open it\n");
                exit(-1);
        }

        fclose(filename);
        return 0;
}

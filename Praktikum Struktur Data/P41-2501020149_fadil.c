#include <stdio.h>
#include <stdlib.h>

void cetakPersegi(int baris, int kolom){
    int i, j;
    printf("Hello, World!\n");

    for (i = 0; i < baris; i++){
        for (j = 0; j < kolom; j++){
            printf("o");
        }
        printf("\n");
    }
}

int main(int argc, char** argv){
    if (argc < 3){
        printf("Gunakan: %s <baris> <kolom>\n", argv[0]);
        return 1;
    }

    int baris = atoi(argv[1]);
    int kolom = atoi(argv[2]);

    cetakPersegi(baris, kolom);

    return 0;
}
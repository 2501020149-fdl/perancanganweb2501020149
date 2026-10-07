#include <stdio.h>
#include <stdlib.h>

void cetakPiramida(int n){
    int i, j;
    printf("Hello, World!\n");
    for (i = 1; i <= n; i++){
        for (j = 0; j < n - i; j++){
            printf(" ");
        }
        for (j = 0; j < (2*i - 1); j++){
            printf("o");
        }
        printf("\n");
    }
}

int main(int argc, char** argv){
    if (argc < 2){
        printf("Gunakan: %s <n>\n", argv[0]);
        return 1;
    }
    int n = atoi(argv[1]);
    cetakPiramida(n);
    return 0;
}
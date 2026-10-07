#include <stdio.h>
#include <stdlib.h>

void cetakPola(int n){
    int i, j, dash;
    printf("Hello, World!\n");
    for (i = 0; i < n; i++){
        for (j = 0; j < i; j++){
            printf(" ");
        }
        printf("o");
        dash = 2 * (n - 1 - i) - 1;
        for (j = 0; j < dash; j++){
            printf("-");
        }
        if (dash > 0){
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
    cetakPola(n);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void cetakHuruf(int n){
    int i, j;
    for (i = 0; i < n; i++){
        char huruf = 'A' + i;
        printf("%c", huruf);
        for (j = 1; j < n; j++){
            printf("%c", huruf + 32);
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
    cetakHuruf(n);
    return 0;
}
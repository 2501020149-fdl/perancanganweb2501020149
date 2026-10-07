#include <stdio.h>

int a;
int *b;

int main(int argc, char** argv){

    b = &a;
    *b = 2;

    printf("a= %d ", a);
    return 0;
}
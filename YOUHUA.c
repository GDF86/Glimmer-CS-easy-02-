#include <stdio.h>
#include <stdlib.h>

const int constValue = 100;
const char* constString = "Hello, World!";
int globalVar = 10;

void function(int arg) {
    int localVar = 20;
    int *ptr = malloc(sizeof(int));
    *ptr = 30;
    free(ptr);
}

int main() {
    int staticVar = 40;
    int localVarMain = 50;
    int input=60;
    return 0;
}
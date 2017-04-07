#include <stdio.h>

int main(void) {
    printf("bool is %lu\n", sizeof(_Bool));
    printf("float is %lu\n", sizeof(float));
    printf("char is %lu\n", sizeof(char));
    printf("double is %lu\n", sizeof(double));
}
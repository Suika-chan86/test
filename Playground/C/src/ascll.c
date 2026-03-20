#include <stdio.h>

int main(void) {
    int i;
    printf("这是表：\n");
    
    for (int i = 0; i < 128; i ++) {
    printf("ASCII: %5d, Char: %c;\n", i, i);
    }
}
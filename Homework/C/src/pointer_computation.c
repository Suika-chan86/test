#include <stdio.h>

int main(void) {
    // char a = 1;
    // char *p = &a;
    int b = 2;
    int *q = &b;

    int a = 1;
    int *p = &a;

    printf("p , q = %p , %p\n", p, q);
    // // 添加 %p 来接收后面的指针参数
    // printf("p     = %p\n", p);
    // printf("p + 1 = %p\n", p + 1); 
    
    // printf("q     = %p\n", q);
    // printf("q + 1 = %p\n", q + 1);

    // return 0;
    q = p;
    printf("p , q = %p , %p\n", p, q);


}
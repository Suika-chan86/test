#include <stdio.h>

int foo (int a,float b){
        printf("%d\n", a);
        printf("%.1f\n", b);
    }
int main(void) {
    foo(10,1.0);

}
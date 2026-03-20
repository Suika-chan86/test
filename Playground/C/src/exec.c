#include <stdio.h>

int main(void) {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n ; i++) {
        int tmp;
        scanf("%d", &tmp);
        sum += tmp;
    
    }

    printf("%d\n", sum);
}
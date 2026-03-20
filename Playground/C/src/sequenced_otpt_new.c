#include <stdio.h>

int main(void) {
    int x = 0;
    scanf("%d", &x);

    int t = x;

    int mask = 1;
    while (t > 9) {
        mask *= 10;
        t /= 10;
    }

    do {
        int d = x / mask;
        printf("%d", d);
        
        if (mask > 9) {
            printf(" ");
        }
        
        x %= mask;
        mask /= 10;
    } while (mask > 0);
}
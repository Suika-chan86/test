# include <stdio.h>

int main(void) {
    int x = 0;
    scanf("%d", &x);

    int num = x;

    int t = 0;
    do {
        int d = x % 10;
        t = t*10 + d;
        x /= 10;
    }while (x > 0);
    printf("t = %d\n", t);

    int s = 0;

    printf("%d的每个数字是：", num);
    while (t > 0) {
        s = t % 10;
        t /= 10;
        // printf("%d的每个数字是：", num);
        printf("%d", s);
        if (t > 0) {
            printf(" ");
        }
    }
    printf("\n");
}
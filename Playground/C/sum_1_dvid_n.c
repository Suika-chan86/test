# include <stdio.h>

int main(void) {
    int n = 0;
    int i = 0;
    double sum = 0;

    scanf("%d", &n);

    for (i = 1; i < n+1; i++) {
        sum += 1.0 / i;
    }
    printf("和：%f\n", sum);
}
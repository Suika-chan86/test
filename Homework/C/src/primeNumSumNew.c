#include <stdio.h>

int isPrime(int i) {
    int k;
    int ret = 1;     
    for (k = 2; k * k <= i; k++) {
        if (i % k == 0) {
            ret = 0;
            break;
        }
    }
    return ret;
}

int main(void) {
    int x, y;
    int i;
    int cnt = 0;
    int sum = 0;

    printf("请输入范围 (例如 2 10): ");
    if (scanf("%d %d", &x, &y) != 2) return 1;

    // 确保 x 是较小的值，y 是较大的值
    if (x > y) {
        int temp = x; x = y; y = temp;
    }

    for (i = x; i <= y; i++) {
        if (i < 2) continue; // 质数必须大于 1
        if (isPrime(i)) {
            cnt++;
            sum += i; // 累加当前的质数 i
        }
    }
    printf("数量: %d, 总和: %d\n", cnt, sum);
    return 0;
}
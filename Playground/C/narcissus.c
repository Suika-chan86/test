#include <stdio.h>

// 你已经写好的整数幂函数
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main(void) {
    int n;
    scanf("%d", &n);

    // 1. 确定遍历范围
    // 例如 n=3，范围是 100 到 999
    int start = power(10, n - 1);
    int end = power(10, n);

    for (int i = start; i < end; i++) {
        int sum = 0;
        int temp = i;
        
        // 2. 拆分当前数字 i 的每一位
        while (temp > 0) {
            int digit = temp % 10; // 取出最后一位
            sum += power(digit, n); // 累加该位的 n 次方
            temp /= 10;            // 去掉最后一位
        }

        // 3. 判断是否符合水仙花数定义
        if (sum == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}
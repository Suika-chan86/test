#include <stdio.h>

int addn(int a,int b) {
    int i;
    int sum = 0;
    
    for (i = a; i <= b; i++) {
        sum += i;
    }

    return sum;
}

int main(void) {
    int a,b;
    int sum;

    printf("请输入两个数字以代表范围，例如“2 10”：");
    if (scanf("%d %d",&a , &b) == 2) {
        printf("和为：%d\n", addn(a,b));
    } else {
        printf("非法输入！！\n");
    }
}
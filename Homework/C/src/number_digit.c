#include <stdio.h>

int main(void) {
    int num = 0;
    int count = 0;

    printf("请输入想要知道位数的数字：");

    scanf("%d", &num);

    count ++;   //用来控制0的正确性
    num /= 10;
    
    while (num > 0){
        count ++;
        num /= 10;
    }
    printf("位数为：%d\n", count);
}
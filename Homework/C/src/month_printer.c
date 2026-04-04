#include <stdio.h>

int main(void)
{
    char *m[] = {"January\n","February\n","March\n","April\n","May\n","June\n","July\n","August\n","September\n","October\n","November\n","December\n",};
    
    int i = 0;
    
    printf("请输入月份：");
    // 检查输入是否为数字
    if(scanf("%d", &i) != 1) {
        printf("请输入数字！\n");
        return 1;
    }

    if (i >= 1 && i <= 12) {
        printf("%s", m[i-1]);
    } else {
        printf("请输入1~12的整数！\n");
    }
        
}
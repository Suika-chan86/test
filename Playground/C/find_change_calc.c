#include <stdio.h>
#include <unistd.h> 

int main(void)
{
    // 初始化
    int price = 0;
    int bill = 0;
    // 录入金额和票面
    printf("请输入金额：");
    scanf("%d", &price);

    printf("请输入票面：");
    scanf("%d", &bill);
    // 计算找零
    if (bill - price >= 0)
    {
        printf("应找您：%d\n", bill - price); 
    }   
    else
    {   
        printf("处理中……\n");
        sleep(1);
        printf("抱歉，余额不足，无法支付！\n");
    }
}
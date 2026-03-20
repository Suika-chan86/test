#include <stdio.h>
#include <unistd.h> 

int main(void){
    int a = 0;
    int b = 0;
    int t = 0;
    
    printf("这是一个能将数字前后交换的脚本。\n");
    sleep(1);

    printf("请输入a的值：");
    scanf("%d", &a);
    sleep(1);
    printf("请输入b的值：");
    scanf("%d", &b);

    t = a;
    a = b;
    b = t;
    
    sleep(1);
    printf("交换中，请稍候……\n");
    sleep(2);
    printf("加载完成！\n");
    printf("a = %d, b = %d",a ,b);

    return 0;

}

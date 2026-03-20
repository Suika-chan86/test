#include <stdio.h>
#include <unistd.h>

int main(void) {
    int score = 0;
    // 读入数据
    printf("请输入您的成绩：");
    int status = scanf("%d" , &score);
    // 合法性建议 
    if (status == 1){
        printf("您的成绩为：%d分。\n" , score);
    }
    else{
        printf("非法输入！！\n");
        return 0;
    }
    // 判断等第
    printf("正在判断等第~\n");
    sleep(1);
    // 取分数的十位
    int sc = score/10;
    // 判断
    printf("您的等第是：");
    
    switch (sc) {
        case 10:
            printf("S\n");
            break;
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        default:
            printf("F\n");
        }
}
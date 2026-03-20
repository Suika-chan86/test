#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(0));
    int num = rand() % 100 + 1;
    int count = 0;
    int a = 0;
    printf("我已经想好了哦~一个1到100以内的整数~");

    do {
        printf("猜猜看~: ");
        
        // scanf 返回成功读取的项目数。如果返回 0，说明输入的不是数字。
        if (scanf("%d", &a) != 1) {
            // 读数字失败了，我们来看看缓冲区里是什么
            int firstChar = getchar(); 

            if (firstChar == 'q' || firstChar == 'Q') {
                printf("玩不起的小杂鱼~\n");
                break; // 退出游戏
            } 
            else {
                // 如果不是 q，说明真的是乱填的垃圾字符
                printf("不想玩可以输入q退出，别乱输入杂鱼zakozako~\n");
                // 把剩下可能存在的垃圾清空
                while (firstChar != '\n' && (firstChar = getchar()) != '\n' && firstChar != EOF);
                continue;
            }
        }

        count++;
        if (a > num) {
            printf("猜大了zakozako~\n");
        } 
        else if (a < num) {
            printf("猜小了zakozako~\n");
        }
        else {
            printf("终于猜出来了zakozako~\n");
        }
    } while (a != num);
}


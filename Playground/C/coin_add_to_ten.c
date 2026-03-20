#include <stdio.h>

int main(void){
    int x;
    int one, two, five;
    int cnt = 0;

    scanf("%d", &x);
    // 第一层循环：1 角硬币的数量
    for ( one = 1; one < x*10; one++ ) {
        // 第二层循环：2 角硬币的数量
        for ( two = 1; two < x*10/2; two++ ) {
            // 第三层循环：5 角硬币的数量
            for ( five = 1; five < x*10/5; five++ ) {
                // 判断逻辑：三种硬币总额是否等于 x 元（x*10 角）
                if ( one + two*2 + five*5 == x*10 ) {
                    printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n", one, two, five, x);
                    cnt++;
                }
            }
        }
    }
    printf("一共有%d种方法\n", cnt);
    return 0;
}
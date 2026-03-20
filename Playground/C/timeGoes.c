#include <stdio.h>

int main() {
    int startTime, offset;
    
    // 读取起始时间和流逝分钟数
    if (scanf("%d %d", &startTime, &offset) != 2) {
        return 0;
    }

    // 1. 拆分小时和分钟
    // 例如 1120: 小时 = 1120 / 100 = 11, 分钟 = 1120 % 100 = 20
    int hour = startTime / 100;
    int minute = startTime % 100;

    // 2. 转换为总分钟数
    int totalMinutes = hour * 60 + minute;

    // 3. 加上流逝的分钟数（offset 可能是负数）
    totalMinutes += offset;

    // 4. 计算最终的小时和分钟
    // 题目保证起始和终止时间在同一天内，所以不需处理跨天逻辑
    int endHour = totalMinutes / 60;
    int endMinute = totalMinutes % 60;

    // 5. 按照格式输出
    // %d 直接输出即可，5点30分输出 530，小时前无前导零，分钟前有前导零（由 %02d 处理）
    // 注意：题目要求结果也是四位数字表示，分钟部分必须占两位
    printf("%d%02d\n", endHour, endMinute);

    return 0;
}
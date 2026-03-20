#include <stdio.h>

int main() {
//     FILE *fp = fopen("/proc/meminfo", "r");
//     char buf[256];
//     if (fp) {
//         // 通常前两三行就是总内存和空闲内存
//         while (fgets(buf, sizeof(buf), fp)) {
//             printf("%s", buf); 
//         }
//         fclose(fp);
//     }
//     return 0;
    void *p;
    int cnt = 0;
    while ((p = malloc(1024 * 1024))) { // 每次申请 1MB
        memset(p, 0, 1024 * 1024);       // 真正占用它，否则测试不准
        cnt++;
        if (cnt % 1024 == 0) printf("已占用 %d GB...\n", cnt / 1024);
    }
}


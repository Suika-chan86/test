#include <stdio.h>

int power(int base, int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= base;
    }
    return result;
}

// int main() {
//     printf("%d\n",power(2, 3));
// }
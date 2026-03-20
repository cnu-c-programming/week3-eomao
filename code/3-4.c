#include <stdio.h>
#include <stdarg.h>

int max_of(int count, ...) {
    va_list args;
    int i, max;

    va_start(args, count);

    max = va_arg(args, int);   // 첫 번째 값을 먼저 최댓값으로 설정

    for (i = 1; i < count; i++) {
        int num = va_arg(args, int);
        if (num > max) {
            max = num;
        }
    }

    va_end(args);

    return max;
}

int main() {
    printf("%d\n", max_of(4, 5, 12, 3, 9));
    printf("%d\n", max_of(6, 1, 2, 3, 4, 5, 6));
    printf("%d\n", max_of(3, 100, 200, 300));
    return 0;
}

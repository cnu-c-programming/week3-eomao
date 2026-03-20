#include <stdio.h>
#include <stdarg.h>

void my_sum(char type, int count, ...) {
    va_list args;
    int i;

    va_start(args, count);

    if (type == 'S') {
        for (i = 0; i < count; i++) {
            char *str = va_arg(args, char *);
            printf("%s", str);
            if (i < count - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    else if (type == 'C') {
        for (i = 0; i < count; i++) {
            char ch = (char)va_arg(args, int);
            printf("%c", ch);
        }
        printf("\n");
    }
    else if (type == 'D') {
        int sum = 0;
        for (i = 0; i < count; i++) {
            sum += va_arg(args, int);
        }
        printf("%d\n", sum);
    }

    va_end(args);
}

int main() {
    my_sum('S', 2, "Hello", "World");
    my_sum('C', 3, 'C', 'N', 'U');
    my_sum('D', 4, 10, 20, 30, 40);

    return 0;
}

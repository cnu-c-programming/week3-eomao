#include <stdio.h>
#include <stdarg.h>

int max_of(int count, int* num){
    int max = 0;
    int i;
    for(i = 0; i < count; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    return max;
}

int main(){
    printf("%d\n", max_of(4, 5, 12, 3, 9));
    printf("%d\n", max_of(6, 1, 2, 3, 4, 5, 6));
    printf("%d\n", max_of(3, 100, 200, 300));
    return 0;
}

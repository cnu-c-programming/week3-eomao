#include <stdio.h>
#include <stdarg.h>

int average(int count, int* nums){
    int i;
    int sum = 0;
    for(i = 0; i < count; i++){
        sum += nums[i];
    }
    return sum/count;
}

int main(){
    printf("%d\n", average(3, 10, 20, 30));
    printf("%d\n", average(5, 10, 20, 30, 40, 50));
    return 0;
}

#include <stdio.h>

int isPrime(int num) {
    for (int i = 2 /* 1 必可被整除，所以跳过 */; i < num /* 跳过自身以及自身以后的数字 */; i++) {
        if (num % i == 0) {  // 无余数则不为素数
            return 0;       // 不通过检查
        }
    }

    // 通过检查
    return 1;
}

int main() {
    int numbers[100];

    for (int i = 0; i < 100; i++) {
        numbers[i] = i + 1;
    }

    printf("Prime numbers between 1 and 100:\n");
    for (int i = 0; i < 100; i++) {
        if (isPrime(numbers[i])) {
            printf("%d ", numbers[i]);
        }
    }

    // 堵塞程序执行, 检查输出
    printf("\n");
    printf("Press any key to continue...");
    getchar();

    return 0;
}
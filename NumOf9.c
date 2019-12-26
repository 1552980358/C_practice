//
// Created by q1552 on 2019/12/26.
//
#include <stdio.h>

int main() {
    int num, count, tmp;

    printf("Input num: ");
    scanf("%d", &num);

    count = 0;

    // 节省时间, 从9开始数
    for (int i = 9; i < num; i++) {
        tmp = i;
        // 每一位数都兼顾
        while (tmp != 0) {
            if (tmp % 10 == 9) {
                count++;
            }
            if (tmp / 10 == 9) {
                count++;
            }
            tmp /= 10;
        }
    }

    printf("There are %d of 9 from 0 to %d", count, num);

    printf("\n");
    printf("Press any key to continue...");
    getchar();

    return 0;
}
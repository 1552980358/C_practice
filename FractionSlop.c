//
// Created by q1552 on 2019/12/23.
//

#include <stdio.h>

/* 获取可除数 */
int findDividable(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return i;
        }
    }
    return 1;
}

int main() {
    int x1, y1, x2, y2;
    int x_diff, y_diff;

    printf("Input Point A x-coordinate: ");
    scanf("%d", &x1); // NOLINT(cert-err34-c)
    printf("Input Point A y-coordinate: ");
    scanf("%d", &y1); // NOLINT(cert-err34-c)

    printf("Input Point B x-coordinate: ");
    scanf("%d", &x2); // NOLINT(cert-err34-c)
    printf("Input Point B y-coordinate: ");
    scanf("%d", &y2); // NOLINT(cert-err34-c)

    x_diff = x2 - x1;
    y_diff = y2 - y1;

    // 分子为0时不可除
    if (x_diff == 0) {
        printf("\n-1\n");
        return 0;
    }

    // 分母为0时, 皆输出0
    if (y_diff == 0) {
        printf("\n0\n");
    }

    // 相同时省去后方计算
    if (x_diff == y_diff) {
        printf("\n1\n");
        return 0;
    }

    // 可直接计算整数
    if (y_diff % x_diff == 0) {
        printf("%d", y_diff / x_diff);
        return 0;
    }

    // 分母可被分子整除
    if (x_diff % y_diff == 0) {
        printf("1 / %d", x_diff / y_diff);
        return 0;
    }

    // 调整是否负值
    int negative = 1;

    // 强制设为正数
    if (x_diff < 0) {
        x_diff *= -1;
        negative *= -1;
    }
    if (y_diff < 0) {
        y_diff *= -1;
        negative *= -1;
    }

    // 可除数
    int dividable;
    // 以最小的数作为获取可除数的基
    if (x_diff > y_diff) {
        dividable = findDividable(y_diff);
        while (dividable != 1) {
            if (x_diff % dividable == 0) {
                y_diff /= dividable;
                x_diff /= dividable;
            }
            dividable = findDividable(y_diff);
        }
    } else {
        dividable = findDividable(x_diff);
        while (dividable != 1) {
            if (x_diff % dividable == 0) {
                y_diff /= dividable;
                x_diff /= dividable;
            }
            dividable = findDividable(x_diff);
        }
    }

    // 负数
    if (negative == - 1) {
        printf("-%d/%d", y_diff, x_diff);
        return 0;
    }
    printf("%d/%d", y_diff, x_diff);


    printf("\n");
    printf("Press any key to continue...");
    getchar();

    return 0;
}
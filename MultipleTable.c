//
// Created by q1552 on 2019/12/13.
//
#include <stdio.h>
int main() {
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d x %d = %d\t", j, i, i*j);
        }
        printf("\n");
    }

    printf("\n");
    printf("Press any key to continue...");
    getchar();

    return 0;
}

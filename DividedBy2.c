//
// Created by q1552 on 2019/12/26.
//

#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    int count = 0;

    while (num % 2 == 0) {
        count++;
        num/=2;
    }

    printf("%d", count);

    return 0;
}
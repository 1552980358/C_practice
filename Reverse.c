#include <stdio.h>
#include <string.h>

void reverse(char origin[26], char new[26]) {
    // 将原数组的值放到新的数组中
    new[strlen(new)] = origin[strlen(origin) - 1];

    // 移除数组中最后一个值
    // 不移除则会导致检查出错
    origin[strlen(origin) - 1] = NULL;

    //检查原数组是否清空
    if (strlen(origin) != 0) {
        // 未清空则递归
        reverse(origin, new);
    } else {
        // 清空则返回
        return;
    }
}

int main() {

    char originCharacterSet[26];    // 原数组
    char newCharacterSet[26];       // 新数组

    // 始初赋值
    for (int i = 0; i < 26; i++) {
        originCharacterSet[i] = (65 + i);
    }
    // 新数组不将全部元素设为NULL时,
    // strlen()则可能返回一个不正确的值
    for (int i = 0; i < 26; i++) {
        newCharacterSet[i] = NULL;
    }

    // 输出原数组
    printf("Origin array:\n");
    for (int i = 0; i < 26; i++) {
        printf("%c", originCharacterSet[i]);
    }

    // 开始递归
    reverse(originCharacterSet, newCharacterSet);

    // 输出新数组
    printf("\nReversed array:\n");
    for (int i = 0; i < 26; i++) {
        printf("%c", newCharacterSet[i]);
    }


    // 堵塞程序执行, 检查输出
    //system("pause");
    // 使用此项在我这里出现 sh: pause: command not found
    printf("\n");
    printf("Press any key to continue...");
    getchar();

    // 程序停止
    return 0;
}
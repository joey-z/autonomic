/*************************************************************************
	> File Name: 0918-3.cpp
	> Author: zoe
	> Mail: 
	> Created Time: 2018年09月18日 星期二 18时59分27秒
 ************************************************************************/
//请使用switch结构完成如下任务,程序读入一个整数n;完成如下任务 n = 1 输出 one two three n = 2 输出 two three n = 3 输出 three 否则输出error

#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("one ");
        case 2:
            printf("two ");
        case 3:
            printf("three\n");
            break;
        default:
            printf("error\n");
            break;
    }

    return 0;
}


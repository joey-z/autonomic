/*************************************************************************
	> File Name: 0918-2.cpp
	> Author: zoe
	> Mail: 
	> Created Time: 2018年09月18日 星期二 18时49分17秒
 ************************************************************************/
//使用switch结构完成如下任务,程序读入一个整数n = 1, 2, 3 输出one two three 否则error

#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    
    switch (n) {
        case 1: 
            printf("one\n");
            break;
        case 2: 
            printf("two\n"); 
            break;
        case 3:    
            printf("three\n"); 
            break;
        default:   
            printf("error\n"); 
            break;
    }

    return 0;
}


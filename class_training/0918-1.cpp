/*************************************************************************
	> File Name: 0918-1.cpp
	> Author: zoe
	> Mail: 
	> Created Time: 2018年09月18日 星期二 18时30分09秒
 ************************************************************************/

#include <stdio.h>
//输入一个正整数n,代表学生的成绩,根据分数输出分数档位

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        if ( n < 0 || n > 100 ) {
            printf("ERROR");
        } else if (n == 0) {
            printf("FOOLISH"); 
        }else if (n < 60) {
            printf("FAIL\n");
        } else if (n < 75) {
            printf("MEDIUM\n");
        } else {
            printf("GOOD\n");
        }
    }

    return 0;
}


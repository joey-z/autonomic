/*************************************************************************
	> File Name: 1004-5.c
	> Author: zoe
	> Mail: 
	> Created Time: 2018年10月04日 星期四 15时41分59秒
 ************************************************************************/
//main函数三种形式

#include <stdio.h>

int main(int argc, char *argv[], char *env[]) {
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    for (char **p = env; p[0] != NULL; p++) {
        printf("%s\n", p[0]);
    }

    return 0;
}

/*************************************************************************
	> File Name: 1006-1.c
	> Author: zoe
	> Mail: 
	> Created Time: 2018年10月06日 星期六 15时00分41秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    union {
        short s;
        char c[sizeof(short)];
    } un;
    un.s = 0x0102;
    if (sizeof(short) == 2) {
        if (un.c[0] == 1 && un.c[1] == 2)
            printf("big_endian\n");
            else if (un.c[0] == 2 && un.c[1] == 1) 
            printf("little_endian\n");
        else 
            printf("unknow-endian\n");
    } else {
        printf("sizeof(short) = %d\n", sizeof(short));
        exit(0);
    }
    return 0;
}

/*************************************************************************
	> File Name: 1006-1.c
	> Author: zoe
	> Mail: 
	> Created Time: 2018年10月06日 星期六 15时00分41秒
 ************************************************************************/
//判断电脑是大端小端 
//对于一个由2个字节组成的16位整数，在内存中存储这两个字节有两种方法：
//一种是将低序字节存储在起始地址，这称为小端(little-endian)字节序；
//另一种方法是将高序字节存储在起始地址，这称为大端(big-endian)字节序。
//理解方法 将数据看成字符串 大端 高尾端 小端 低尾端  
#include <stdio.h>
#include <stdlib.h>

int main() {
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

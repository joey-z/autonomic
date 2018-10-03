/*************************************************************************
	> File Name: 0923-2.cpp
	> Author: zoe
	> Mail: 
	> Created Time: 2018年09月23日 星期日 11时15分56秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int ret;
    unsigned char *p = (unsigned char *)&ret;
    int a, b, c, d;
    while (scanf("%d.%d.%d.%d", &a, &b, &c, &d) != EOF) {
        p[0] = a;
        p[1] = b;
        p[2] = c;
        p[3] = d;
        printf("ret = %u\n", ret);
    }
    /*int *p1 = (int *)(arr + 1);
    int *p2 = (int *)(arr + 2);
    *p1 = 1;
    *p2 = 2;
    printf("*p1 = %d\n*p2 = %d\n", *p1, *p2);
    */
    return 0;
}


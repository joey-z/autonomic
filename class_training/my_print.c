/*************************************************************************
	> File Name: 0920-5.c
	> Author: zoe
	> Mail: 
	> Created Time: 2018年09月20日 星期四 20时27分31秒
 ************************************************************************/

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <inttypes.h>

int my_printf(const char *frm, ...) {
    int cnt = 0;
    int p = 0;
    va_list arg;
    va_start(arg, frm);
    for (int i = 0, cnt = 0; frm[i]; i++, cnt++) {
        switch (frm[i]) {
            case '%': { 
                i++;
                switch(frm[i]) {
                    case 'd': {
                        int64_t temp = va_arg(arg, int), x = 0;
                        if (temp < 0) {
                            putchar('-');
                            temp = temp * -1;
                        }
                        while (temp) {
                            x = x * 10 + temp % 10;
                            if (x == 0) {
                                p++;
                            }
                            temp /= 10;
                        }
                        while (x) {
                            putchar(x % 10 + '0');
                            x /= 10;
                        }
                        for (int i = 1; i <= p; i++) {
                            putchar('0');
                        } break;
                    }
                    default:
                        fprintf(stderr, "error : unknow %%%c\n", frm[i]);
                        exit(1); //退出整个程序 终止进程
                }
            } break;
        default:
            putchar(frm[i]);
        }
    }
    return cnt;
}
int main() {
    int n = 123;
    my_printf("hello world\n");
    my_printf("n = %d\n", n);
    my_printf("n = %d\n", 12000);
    my_printf("n = %d\n", -567);
    my_printf("n = %d\n", INT32_MIN);
    my_printf("n = %d\n", INT32_MAX);
    return 0;
}

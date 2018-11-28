/*************************************************************************
	> File Name: p1085.c
	> Author: Zoe 
	> Mail: 
	> Created Time: 2018年11月27日 星期二 20时55分49秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int stime[8], htime[8];
    for (int i = 1; i < 8; i++) {
        scanf("%d %d", stime + i, htime + i);
    }
    int temp = 1;
    stime[0] = stime[1] + htime[1];
    for (int i = 2; i < 8; i++) {
        if (stime[0] < stime[i] + htime[i]) {
            stime[0] = stime[i] + htime[i];
            temp = i;
        } 
    }
    printf("%d\n", temp);
    return 0;
}

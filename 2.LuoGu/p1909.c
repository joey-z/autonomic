/*************************************************************************
	> File Name: p1909.c
	> Author: Zoe 
	> Mail: 
	> Created Time: 2018年11月27日 星期二 19时42分55秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int num;
    int des[10];
    scanf("%d", &num);
    for (int i = 0; i < 6; i++) {
        scanf("%d", des + i);
    }
    if (num % des[0] == 0) {
        des[6] = num / des[0];
    } else {
        des[6] = num / des[0] + 1;
    }
    if (num % des[2] == 0) {
        des[7] = num / des[2];
    } else {
        des[7] = num / des[2] + 1;
    }
    if (num % des[4] == 0) {
        des[8] = num / des[4];
    } else {
        des[8] = num / des[4] + 1;
    }
    //printf("des = %d %d %d\n", des[6], des[7], des[8]);
    int temp = 0;
    if (des[7] * des[3] > des[6] * des[1]) {
        temp = des[6] * des[1];
    } else {
        temp = des[7] * des[3];
    }
    printf("%d", temp < (des[8] * des[5]) ? temp : (des[8] *des[5]));
    return 0;
}

/*************************************************************************
	> File Name: p1089.c
	> Author: Zoe 
	> Mail: 
	> Created Time: 2018年11月27日 星期二 21时45分13秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int mon[12];
    for (int i = 0; i < 12; i++) {
        scanf("%d", mon + i);
    }
    int temp = 0, save = 0;
    for (int i = 0; i < 12; i++) {
        save += (temp + 300 - mon[i]) / 100;
        temp = (temp + 300 - mon[i]) % 100;
        printf("temp = %d\n", temp);
        printf("mon[%d]: temp[%d] = %d\n", i, i, save);
        if (temp < 0) {
            printf("%d", -(i + 1));
            return 0;
        }
    }
    save *= 120;
    printf("%d\n", save + temp);
    return 0;
}

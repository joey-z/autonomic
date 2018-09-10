/*************************************************************************
	> File Name: order.cpp
	> Author: zoe
	> Mail: 
	> Created Time: 2018年09月10日 星期一 19时00分51秒
 ************************************************************************/
#include <stdio.h>
#include <string.h>

char names[10][21];

int main() {
    int m, i, j;
    for (i = 0; i < 10; i++) {
        scanf("%s", names[i]);
    }
    char temp[100];
    for (i = 0; i < 10; i++) {
        m = i;
        for (j = i + 1; j < 10; j++) {
            if (strcmp(names[m], names[j]) > 0) {
                m = j;
            }
        }
        strcpy(temp, names[i]);
        strcpy(names[i], names[m]);
        strcpy(names[m], temp);
    }
    for (i = 0; i < 10; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

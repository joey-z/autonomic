/*************************************************************************
	> File Name: 0913.cpp
	> Author: zoe
	> Mail: 
	> Created Time: 2018年09月13日 星期四 18时31分34秒
 ************************************************************************/

#include <stdio.h>

int main() {

    int n;
    char str[100];
    FILE *fout = fopen("/dev/null", "w");
    
    while (scanf("%d", &n) != EOF) {
        printf("%d\n", fprintf(fout, "%d", n));
    }   

    return 0;
}


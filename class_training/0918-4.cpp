/*************************************************************************
	> File Name: 0918-4.cpp
	> Author: zoe
	> Mail: 
	> Created Time: 2018年09月18日 星期二 19时23分36秒
 ************************************************************************/
//回文整数

#include <stdio.h>

int main() {

    bool isPalindrome(int x) {
        if (__builtin_expect(!!(x),0)) return false; 
    int y = 0, z = x;
        while (x) {
            y = y * 10 + x % 10;
            x /= 10;
        }
        return z == y;
    }
    return 0;
}


/*************************************************************************
	> File Name: 0920-2.cpp
	> Author: zoe
	> Mail: 
	> Created Time: 2018年09月20日 星期四 18时38分56秒
 ************************************************************************/
//实现程序 读入n 计算n 的阶乘

#include <stdio.h>

int factorial(int x) { //明确的语义信息 
    if (x == 1) return 1; //边界条件(想写几个就写几个)
    else return factorial(x - 1) * x; //递归过程和处理过程 结果返回
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", factorial(n));

    return 0;
}


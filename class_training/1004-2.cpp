/*************************************************************************
	> File Name: 1004-2.cpp
	> Author: zoe
	> Mail: 
	> Created Time: 2018年10月04日 星期四 10时12分03秒
 ************************************************************************/
//代码演示 共用体 结构体
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma pack(2) 
//预处理命令 改变对齐方式 可节省空间
//工程代码中很少用pack() cpu存取困难 多存取一次

struct person {
    char name[20];
    int age;
    char gender;
    float height;
};


struct test {
    short a; //占两个字节 short 0 2 4 8 可用pack()预处理命避免浪费
    char b;
    int c; //int 只能放在起始位置偏移量的 0 4 8 
    double e; //0 8
    
};

struct Number {
    int type; // 0 - > 整型 1 - > 双精度浮点型
    union {
        int num1;
        double num2;
    } N;
};

void print(Number *n) {
    switch (n ->type) {
        case 0: printf("%d\n", n->N.num1); break;
        case 1: printf("%f\n", n->N.num2); break;
    } 
    return ;
}

void set(Number *n, float num) {
    n->type = 1;
    n->N.num2 = num;
}

void set(Number *n, int num) {
    n->type = 0;
    n->N.num1 = num;
}

int main() {
    srand(time(0));
    struct test a;//定义一个a变量
    printf("sizeof(person) : %d\n", sizeof(struct person));
    printf("%p %p %p %p", &a.a, &a.b, &a.c, &a.e);
    #define MAX_N 20
    Number arr[MAX_N];
    for (int i = 0; i < MAX_N; i++) {
        int op = rand() % 2;
        switch (op) {
            case 0: {
                int value = rand() % 10;
                set(arr + i, value);
            } break;
            case 1: {
                float value = (1.0 * (rand() % 10000) / 10000) * 100;
                set(arr + i, value);
            } break;
        }
    }
    for (int i = 0; i < MAX_N; i++) {
        print(arr + 1);
    }
    arr[0].N.num2 = 1.0;
    printf("arr[0].N.num1 = %d\n", arr[0].N.num1);
    printf("arr[0].N.num1 = %x\n", arr[0].N.num1);
    return 0;
}


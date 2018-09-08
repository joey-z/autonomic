/*************************************************************************
	> File Name: 1-5.cpp
	> Author: zoe
	> Mail: 
	> Created Time: 2018年09月08日 星期六 22时51分21秒
 ************************************************************************/
//求圆柱体的表面积
#include <stdio.h>
#include <math.h>

int main() {
    const double pi = acos(-1.0);
    double r, h, s1, s2, s;
    scanf("%lf %lf", &r, &h);
    s1 = pi * pi * r;
    s2 = 2 * pi * r * h;
    s = s2 + 2 * s1;
    printf("Area = %.3lf\n", s);
    return 0;
}


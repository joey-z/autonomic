/*************************************************************************
	> File Name: ferror.c
	> Author: zoe
	> Mail: 
	> Created Time: 2018年10月04日 星期四 02时18分30秒
 ************************************************************************/
//ferror()函数用法  int ferror(FILE *stream) 测试给定流 stream 的错误标识符
//clearerr()函数     void clearerr(FILE *stream)
//clearerr的作用是使文件错误标志和文件结束标志置为0.
//假设在调用一个输入输出函数时出现了错误，ferror函数值为一个非零值。
//在调用clearerr（fp）后，ferror（fp）的值变为0。

#include <stdio.h>

int main() {
    FILE *fp;
    char c;

    fp = fopen("file.txt", "w");
    
    c = fgetc(fp);
    if (ferror(fp)) {
        printf("读取文件:file.txt 时发生错误");
    }
    //clearerr(fp);
    if (ferror(fp)) {
        printf("读取文件:file.txt出错");
    }
    fclose(fp);

    return 0;
}

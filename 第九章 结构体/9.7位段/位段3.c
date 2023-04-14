#include<stdio.h>

struct stu{
    char a:1;
    char b:2;
    char c:1;
    char :0;  // 作用是使下一个位段从下一个存储单元存储
    char d:2;
}data;

int main(){
    printf("sizeof(data) = %d\n", sizeof(data));///结果为2
    return 0;
}
#include<stdio.h>
int main(){
    int a = 0x1234abcd;  //a是局部变量所有每次运行程序a的地址都不一样
    int *p;
    p = &a; //把a的地址值给p赋值，&是取地址符
    printf("%d\n", p);
    int num;
    num = *p;
    printf("num = %x\n", num);
    return 0;
}
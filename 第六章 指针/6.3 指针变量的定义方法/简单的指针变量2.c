#include<stdio.h>
int main(){
    int a = 100, b = 200;
    int *p_1, *p_2 = &b; //局部变量不初始化的话是值是随机的，所有p_1是个野指针
    p_1 = &a;
    printf("a = %d\n*p_1 = %d\n", a, *p_1);
    printf("b = %d\n*p_2 = %d\n", b, *p_2);
    return 0;
}
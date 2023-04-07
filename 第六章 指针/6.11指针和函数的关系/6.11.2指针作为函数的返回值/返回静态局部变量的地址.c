#include<stdio.h>

char* func(){
    static char str[100] = "hello kitty"; 
    return str;
}
int main(){
    char* p;
    p = func();
    printf("%s\n", p);  //静态局部变量的生命周期是从定义开始到程序结束
    return 0;
}

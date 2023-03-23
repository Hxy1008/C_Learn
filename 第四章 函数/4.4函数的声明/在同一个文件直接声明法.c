#include <stdio.h>

void fun();// 不加这个，如果离主调函数很远，就会报错。
int main(){
    fun();
    return 0;
}

void fun(){
    printf("hello world");
}
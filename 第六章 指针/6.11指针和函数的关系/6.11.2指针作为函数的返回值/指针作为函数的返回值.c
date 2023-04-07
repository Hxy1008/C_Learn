#include<stdio.h>
extern char str[100] = "hello kitty;";
char* func(){
    return str;
}
int main(){
    char* p;
    p = func();
    printf("%s\n", p);  //这里什么都打印不出来了，因为函数运行完，内存中的东西被释放了
    return 0;
}
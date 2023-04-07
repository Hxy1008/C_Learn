#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* func(){
    char* str;
    str = (char*)malloc(100);
    strcpy(str, "hello world");
    return str;
}
int main(){
    char* p;
    p = func();
    printf("%s\n", p);  //静态局部变量的生命周期是从定义开始到程序结束
    free(p);
    printf("%s\n", p);  
    return 0;
}


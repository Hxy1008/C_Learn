#include<stdio.h>
#include<string.h>
#pragma warning(disable: 4996)

int main(){
    char buf[20] = "hello world";
    printf("buf = %s\n", buf);
    char* const str = buf;
    *str = '1';  
    printf("buf = %s\n", buf);
    // char a = 's';
    // str = &a; 报错
    return 0;
}
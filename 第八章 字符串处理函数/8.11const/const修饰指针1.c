#include<stdio.h>
#include<string.h>
#pragma warning(disable: 4996)

int main(){
    char buf[20] = "hello world";
    const char* str = buf;
    strcpy(str, "hello kitty");
    printf("buf = %s\n", buf);
    // *str = '1';  报错
    // printf("buf = %s\n", buf);
    return 0;
}
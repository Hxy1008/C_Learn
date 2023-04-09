#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[50] = "aaaa";
    char* p = "hello123456";
    strncat(str, p, 5);
    printf("str = %s\n", str);
    strncat(str, p, 15);// n>字符串长度时，也只会追加这个字符串进去，并添加'\0'不会添加别的
    printf("str = %s\n", str);

    return 0;
}
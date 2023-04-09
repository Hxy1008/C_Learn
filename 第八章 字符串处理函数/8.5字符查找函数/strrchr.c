#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>

// char* strrchr(const char* s, int c);
int main(){
    char str[50] = "jdlsfjdaiunvcznvfhafitocretr";
    char* p = strrchr(str, 'c');
    if(p != NULL){              //返回值有空的函数，进行一下判断
    printf("p = %c\n", *p);
    printf("p - str = %d\n", p - str);
    }
    return 0;
}
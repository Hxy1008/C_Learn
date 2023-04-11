#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
/*
统计字符串"hellowrold helloworld helloworld helloworld"中字符w的个数及位置
*/

int main(){
    char* str = "hellowrold hellowworld helloworld helloworld";
    int num = 0, i = 0, j = 0;
    char* p, q;
    printf("str = %p\n", str);
    while(strchr((str + j + 1), 'w') != NULL){
        p = strchr((str + j + 1), 'w');
        printf("地址为：%p\n", p);
        i++;
        j = p - str;
    }
    printf("一共有%d个\n", i);
    return 0;
}
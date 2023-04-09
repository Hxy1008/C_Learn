#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[50] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    char* p = "hello";
    char* q = "123456";
    strcat(str, p); //去掉前面的'\0'，在最后加一个'\0'
    printf("str = %s\n", str);
    strcat(str, q);
    printf("str = %s\n", str);
    char* n = (char*)malloc(50);
    strcpy(n, p);
    strcat(n, q);
    printf("n = %s\n", n); 

    return 0;
}
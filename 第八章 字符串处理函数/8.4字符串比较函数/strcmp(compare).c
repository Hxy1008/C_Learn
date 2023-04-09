#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// int strcmp(const char *s1, const char*s2);
int main(){
    int result;
    char* a = "aaaaaaa";
    char* b = "bbbbbbb";
    char* c = "aaaaaaa";
    result = strcmp(a, b);
    printf("result = %d\n", result);
    result = strcmp(b ,a);
    printf("result = %d\n", result);
    result = strcmp(a, c);
    printf("result = %d\n", result);
    return 0;

}
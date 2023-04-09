#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// int strncmp(const char* s1, const char* s2, size_t n); //n最大不要超过s1和s2中最长的那个的长度
int main(){
    int result;
    char* a = "aaaabc";
    char* b = "aaaacd";
    result = strncmp(a, b, 4);
    printf("result = %d\n", result);
    result = strncmp(a, b, 5);
    printf("result = %d\n", result);
    return 0;
}
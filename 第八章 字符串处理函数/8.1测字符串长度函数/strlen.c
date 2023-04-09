#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
int main(int argv, char* argc[]){
    char str1[20] = {'h','e','l','l','o'};
    
    char* str2 = "hello";
    printf("sizeof(str1) = %d\n", sizeof(str1)); //有点晕str1应该是一个指针常量 这里怎么又变成测数组了
    printf("strlen(str1) = %d\n", strlen(str1));
    printf("sizeof(str2) = %d\n", sizeof(str2));
    printf("strlen(str2) = %d\n", strlen(str2));
    return 0;
}
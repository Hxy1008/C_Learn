#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[50] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    char* p = "hello";
    printf("str = %s\n", str);
    strcpy(str, p);
    printf("str = %s\n", str);

    char str1[50]= "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    char* q = "hello123456";
    printf("str1 = %s\n", str1);
    strncpy(str1, q, 8); //不拷贝'\0'
    printf("str1 = %s\n", str1);
    printf("str1 + 8 = %s\n", str1+8);

    char str2[50]= "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    char* m = "hello123456";
    printf("str2 = %s\n", str2);
    strncpy(str2, m, 12); // 会在后面添加 n - strlen（q）个'\0'
    printf("str2 = %s\n", str2);
    printf("str2 + 13 = %s\n", str2+13);
    return 0;
}
#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>


/*
实现strlen()函数的功能
*/

unsigned int mystrlen(const char* str){
    char* p = str;

    while(*p != '\0'){
        p++;
    }
    return p - str;

}
int main(){
    char* a = "helloworld";
    int str_len;
    int result;
    str_len = strlen(a);
    result = mystrlen(a);
    printf("str_len = %d\n", str_len);
    printf("result = %d\n", result);
    return 0;
}
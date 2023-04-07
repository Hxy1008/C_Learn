#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
    char *p;
    p = (char*)malloc(100);
    p = "hello world"; // 内存泄漏

    return 0;
}
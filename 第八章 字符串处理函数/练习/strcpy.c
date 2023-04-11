#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>

void mystrcpy(char* to, const char* source){
    char* p1 = to;
    const char* p2 = source;
    while(*p2 != '\0'){
        *p1 = *p2;
        p1++;
        p2++;
    }
    *p1 = '\0';
    return to;
}

int main(){
    char* p = "hello world kitty";
    char buf[50];
    mystrcpy(buf, p);
    printf("buf = %s\n", buf);
}
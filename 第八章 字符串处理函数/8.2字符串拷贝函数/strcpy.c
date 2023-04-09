#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable: 4996)
int main(){
    char* b = (char*)malloc(15);
    strcpy(b, "hello kitty");
    printf("%s\n", b);

    char* p = "hello kitty";
    char q[15];
    strcpy(q, p);
    printf("%s\n", q);
    return 0;
}
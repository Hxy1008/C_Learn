#include<stdio.h>
#include<stdlib.h>
int main(int argv, char* argc[]){
    char* p = (char*)malloc(100);
    p = (char*)realloc(p, 150);
    p = (char*)realloc(p , 50);
    return 0;
}
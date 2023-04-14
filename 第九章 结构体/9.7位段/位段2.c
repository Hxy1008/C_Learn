#include<stdio.h>

struct stu{
    char a:7;
    // char a:9;
    char b:7;
    char c:2;
}data;

int main(){
    printf("sizeof(data) = %d\n", sizeof(data));
    return 0;
}

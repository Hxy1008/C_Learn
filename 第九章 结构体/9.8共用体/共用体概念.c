#include<stdio.h>
union data{
    short i;
    char ch;
    int f;
};

struct stu{
    short i;
    char ch;
    int f;
};

int main(){
    union data test;
    struct stu test1;
    printf("sizeof(test) = %d\n", sizeof(test));
    printf("sizeof(test1) = %d\n", sizeof(test1));
    printf("&test = %p\n", &test);
    printf("&test.i = %p\n", &test.i);
    printf("&test.ch = %p\n", &test.ch);
    printf("&test.f = %p\n", &test.f);
    return 0;
}
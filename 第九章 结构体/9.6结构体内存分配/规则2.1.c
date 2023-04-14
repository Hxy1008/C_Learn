#include<stdio.h>
#include<string.h>

typedef struct stu{
    char a[10];
    int c;
};

int main(){

    struct stu test;
    printf("sizeof(test) = %d\n", sizeof(test));
    printf("&test = %p\n", &test);
    printf("&test.a = %p\n", &test.a);
    // printf("&test.b = %p\n", &test.b);
    printf("&test.c = %p\n", &test.c);
    return 0;
}
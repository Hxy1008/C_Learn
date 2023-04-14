#include<stdio.h>
#pragma warning(disable: 4996)
#pragma pack(8)
// #pragma pack(2)
// #pragma pack(1)
struct stu{
    char a;
    int b;

}test;

int main(){
    printf("sizeof(test) = %d\n", sizeof(test));
    printf("&test.a = %p\n", &test.a);
    printf("&test.b = %p\n", &test.b);
    return 0;
}
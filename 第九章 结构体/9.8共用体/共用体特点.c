#include<stdio.h>
union data{
    unsigned char a;
    unsigned int b;
};

int main(){
    union data test;
    test.b = 0xffffff01;
    printf("test.b = %x\n", test.b);
    printf("test.a = %x\n", test.a);
    test.a = 0x55;
    printf("test.b = %x\n", test.b);
    printf("test.a = %x\n", test.a);
    return 0;
}
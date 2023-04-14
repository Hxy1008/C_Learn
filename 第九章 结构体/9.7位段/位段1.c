#include<stdio.h>

struct stu{
    unsigned int a:2;
    unsigned int b:6;
    unsigned int c:4;
    unsigned int d:4;
    unsigned int i;

}data;

int main(){
    data.a = 5;
    // data.a = 3;
    printf("sizeof(data) = %d\n", sizeof(data));
    printf("&data = %p\n", &data);
    printf("&data.i = %p\n", &data.i);
    printf("a = %u\n", data.a);  //只占两字节，最大是3

    return 0;
}
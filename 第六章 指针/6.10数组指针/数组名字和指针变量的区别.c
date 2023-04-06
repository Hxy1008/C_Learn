#include<stdio.h>
int main(){
    int a[5] = {0,1,2,3,4};
    int *p;
    p = a;
    printf("a = %p\n", a);
    printf("&a = %p\n", &a);
    printf("&a + 1 = %p\n", &a + 1);
    printf("&p = %p\n", &p);
    printf("&p + 1 = %p\n", &p + 1); //64位系统，多了8字节 因为一个地址有八位
    return 0;
}
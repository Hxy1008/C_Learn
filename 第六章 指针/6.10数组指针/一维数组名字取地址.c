#include<stdio.h>
int main(){
    int a[10];
    printf("a = %p\n", a);// 这里不用&a 因为a本身就是一个常量 一个地址
    printf("a+1 = %p\n", a+1);
    printf("&a = %p\n", &a);
    printf("&a + 1 = %p\n", &a + 1); // 这里大了40个字节
    return 0;
}
// 虽然a 和 &a 的值是相同的 但是a代表的是整形的指针，&a代表的是数组指针 类型不一样，但指向一个地方
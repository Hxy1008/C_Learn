#include<stdio.h>
int main(){
    int a[4][5];
    printf("a = %p\n", a); 
    printf("a + 1 = %p\n", a + 1); //二维数组的名字是一个一维数组指针，指向第0个一维数组的地址
    printf("&a = %p\n", &a);
    printf("&a + 1 = %p\n", &a + 1); // 这里多八十个字节 &a变成了二维数组指针
    return 0;
}
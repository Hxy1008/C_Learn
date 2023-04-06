#include<stdio.h>
int main(){
    int a[3][5] = {
        {1,2,3,4,5},
        {6,7,8,9,0}
    };
    int(*p)[5];
    p = a;
    printf("a = %p\n", a); // a是数组的名字，是数组中第零个元素（一维数组）的首地址，是一个维数组指针，是a[0]的地址
    printf("*a = %p\n", *a); // *a是这一行第零个元素（一个整型）的地址 即a[0][0]的地址
    printf("*a + 1 = %p\n", *a + 1); // 这里多四个字节
    printf("*(*a + 1) = %d\n", *(*a + 1));
    printf("p = %p\n", p);
    printf("*p = %p\n", *p);
    printf("*p + 1 = %p\n", *p + 1);
    printf("a[0] = %p\n", a[0]);
    printf("a[0] = %d\n", a[0]);
    printf("&a[0] + 1 = %p\n", &a[0] + 1);
    printf("a + 1 = %p\n", a + 1);
    // *p = *a = &a[0][0]
    // &p ！= &a
    return 0;
    }
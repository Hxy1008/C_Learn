#include<stdio.h>
int main(){
    // 1.指针可以加一个整数，往下指几个它的指向的变量，结果还是个地址
    // 前提：指针指向数组的时候，加一个整数才有意义
    char a1[5] = {"abcd"};
    char *p1;
    p1 = a1;
    printf("%c\n", *(p1+2));
    printf("%p\n",p1);
    printf("%p\n",p1+2);
    int a2 = 8;
    int *p2 = &a2;
    printf("%d\n", p2+2);
    // 2.两个相同类型的指针可以比较大小
    // 前提：两个相同类型的指针必须指向同一个数组的元素，比较大小才有意义
    int a3[10];
    int *p3, *q3;
    p3 = &a3[1];
    q3 = &a3[6];
    if(p3 < q3){
        printf("p3 < q3\n");
    }
    else if(p3 > q3){
        printf("p3 > q3\n");
    }
    else{
        printf("p3 == q3\n");
    }
    // 3.两个相同类型的指针可以做减法
    // 前提：必须是两个相同类型的指针指向同一个数组的元素的时候，做减法才有意义
    // 结果：是两个指针之间有几个元素，而不是指针的存储的数值的差值
    int a4[10];
    int *p4, *q4;
    p4 = &a4[1];
    q4 = &a4[6];
    printf("%d\n", q4);
    printf("%d\n", p4);
    printf("%d\n", q4 - p4);
    // 4.两个相同类型的指针可以相互赋值
    int *p, *q;
    int a = 100;
    p = &a;
    q = p;
    printf("*q = %d\n", *q);
    return 0;
}
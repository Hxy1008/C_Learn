#include<stdio.h>
int main(){
    int *p1, *p2, temp, a, b;
    p1 = &a;
    p2 = &b;
    printf("please input the values of a and b:\n");
    scanf_s("%d %d", p1, p2);// 如果用&p1, &p2 的话就相当于给p1 p2赋值了 p1相当于&a p2相当于&b
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("a = %d\nb = %d\n", a, b);
    printf("*p1 = %d\n*p2 = %d\n", *p1, *p2);
    return 0;
}
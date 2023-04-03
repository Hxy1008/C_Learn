#include<stdio.h>
int main(){
    int a[3][5];
    int b[6][5];
    int(*p)[5];
    p = a;
    printf("a = %p\n", a);
    printf("a+1 = %p\n", a+1);
    printf("p = %p\n", p);
    printf("p+1 = %p\n", p+1);
    printf("&a[0][0]= %p\n", &a[0][0]);
    printf("&a[0][0]+1= %p\n", &a[0][0]+1);
    return 0;
}
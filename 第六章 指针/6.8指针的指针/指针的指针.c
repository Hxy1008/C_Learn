#include<stdio.h>
int main(){
    int a = 100;
    int *p = &a;
    int **q = &p;
    int ***m = &q;
    printf("&a = %p\n", &a);
    printf("p = %p\n", p);
    printf("&p = %p\n", &p);
    printf("q = %p\n", q);
    printf("&q = %p\n", &q);
    printf("m = %p\n", m);
    printf("**q = %d\n", **q);
    printf("***m = %d\n", ***m);
    return 0;
}
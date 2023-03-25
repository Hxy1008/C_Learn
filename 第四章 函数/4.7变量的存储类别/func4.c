#include<stdio.h>
static int num;
void func4(){
    printf("in func4 &num = %p\n", &num);
    printf("in func4 num = %d\n", num);
}
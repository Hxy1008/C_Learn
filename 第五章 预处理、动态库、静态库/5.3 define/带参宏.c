#include<stdio.h>
#define S(a, b) a * b
int main(){
    int a, b;
    a = S(8, 7);
    b = S(3+5, 7);
    printf("a = %d\nb = %d\n", a, b);
    #undef S
    #define S(a, b) (a) * (b)
    b = S(3+5, 7);
    printf("b = %d\n", b);
    return 0;
}
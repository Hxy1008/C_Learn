#include <stdio.h>
int main(){
    char a = 'x';
    int b = 101;
    float c = 3.14f;
    double d = 1.233;
    int e = 0x3d;
    float f = 1245436;
    printf("a = %c\n", a);
    printf("b = %d\n", b);
    printf("c = %f\n", c);
    printf("d = %lf\n", d);
    printf("e = %x\n", e);
    printf("f = %e\n", f);
    return 0;
}
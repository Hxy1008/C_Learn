#include <stdio.h>
int main(){
    int a = 10;
    int b = 20;
    int c = 0;
    c = a + b;
    printf("c = %d\n",c);
    c = 10 % 3;
    printf("c = %d\n",c);
    a += 3;
    printf("a = %d\n",a);
    b *= a;
    printf("b = %d\n",b);
    return 0;
}

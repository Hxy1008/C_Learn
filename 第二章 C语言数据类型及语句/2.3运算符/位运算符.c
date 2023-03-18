#include <stdio.h>
int main(){
    printf("%x\n",(-5 & 10)); // - > 单独打印一个a 即0x0a
    printf("%x\n",(-5 | 10));
    printf("%X\n", ~(-5));
    printf("%d\n", (-1) >> 3);
    return 0;
}
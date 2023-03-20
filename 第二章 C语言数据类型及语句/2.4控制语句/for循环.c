#include<stdio.h>
int main(){
    int a = 0;
    int i, b;
    for(i = 1; i <= 100; i++){
        a = a + i;
        for(b = 1; b <= 10; b++){
            printf("b = %d i = %d\n", b, i);
        }

    }
    printf("a = %d\n", a);
    return 0;
}
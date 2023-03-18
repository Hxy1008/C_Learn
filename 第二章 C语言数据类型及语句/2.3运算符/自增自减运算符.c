#include <stdio.h>
int main(int argc, char *argv[]){
    // int a = 3;
    // int num;
    // num = a++;

    // printf("a = %d\nnum = %d\n", a, num);

    // int b = 3;
    // int num1;
    // num1 = ++b;
    // printf("b = %d\nnum1 = %d\n", b, num1);
    int num;
    int i = 3;
    num = (i++)+(i++)+(i++);
    printf("num = %d\ni = %d\n", num, i);
    i = 3;
    num = (++i)+(++i)+(++i);
    printf("num = %d\ni = %d\n", num, i);
    i = 3;
    num = (++i)+(i++)+(++i);
    printf("num = %d\ni = %d\n", num, i);
    return 0;
}
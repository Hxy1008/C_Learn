#include<stdio.h>
int func(int x, int y){
    int i = 0;
    if(x > y){
        return x;
    }
    else if(x < y){
        return y;
    }
    else{
        return i;
    }
}

int main(){
    int(*p)(int, int);
    int num;
    p = func; // p存放了func函数的地址
    num = func(10,20);
    printf("%d\n", num);
    num = p(10, 10);
    printf("%d\n", num);
    printf("%d\n", p(10,10));
    return 0;
}
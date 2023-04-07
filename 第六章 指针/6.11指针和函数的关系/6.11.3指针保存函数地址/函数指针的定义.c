#include<stdio.h>
int func(int x, int y){
    int i = 0;
    if(x > y){
        return x;
    }
    else if(x = y){
        return i;
    }
    else{
        return y;
    }
}

int main(){
    int(*p)(int, int);
    p = func; // p存放了func函数的地址

    return 0;
}
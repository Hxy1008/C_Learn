#include<stdio.h>
int max(int x, int y){
    if(x > y){
        return x;
    }
    else{
        return y;
    }
}
int min(int x, int y){
    if(x < y){
        return x;
    }
    else{
        return y;
    }
}
int add(int x, int y){
    return x + y;
}
int sub(int x, int y){
    return x - y;
}
int func(int(*p)(int, int), int x, int y){
    int num;
    num = (*p)(x, y);
    return num;
}

int main(){
    printf("func(max, 3, 4) = %d\n",func(sub, 3, 4));
    return 0;
}
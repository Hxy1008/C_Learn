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
int main(){
    int num;
    int(*p[4])(int, int) = {max, min, add, sub};
    num = (*p[2])(10,20);
    printf("10 + 20 = %d\n", num); 
    return 0;
}
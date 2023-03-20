#include<stdio.h>
int main(){
    int i = 1, a = 0;

    while(i <= 100){
        a += i;
        i++;
    }
    printf("1~100的和为：%d\n", a);
    return 0;
}
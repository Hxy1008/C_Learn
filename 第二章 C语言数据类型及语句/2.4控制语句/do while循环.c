#include<stdio.h>
int main(){
    int i = 0, a = 1; 
    do{
        i += a;
        a++;
    }while(a <= 100);
    printf("1~100的和为：%d\n", i);
    return 0;
}
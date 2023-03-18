#include <stdio.h>
int main(){
    int a = 10;
    int b = 20;
    int c = 30;
    if((a < b) && (b > c)){
        printf("aaa\n");
    }
    if((a < b) || (b > c)){
        printf("aaa\n");
    }
    if(!(a < b)){
        printf("aaa\n");
    }
    return 0;
}
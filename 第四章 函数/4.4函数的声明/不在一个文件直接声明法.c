#include<stdio.h>
extern int max(int x, int y);

int main(){
    int num; 
    num = max(11, 22);
    printf("%d", num);
    return 0;
}
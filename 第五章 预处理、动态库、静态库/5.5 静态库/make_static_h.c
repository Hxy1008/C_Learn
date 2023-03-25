#include<stdio.h>
#include"mylib.c"
int main(int argc, char *argv[]){
    int a=10, b=20,max_num,min_num;
    max_num = max(a,b);
    min_num = min(a,b);
    printf("max_num = %d\n", max_num);
    printf("min_num = %d\n", min_num);
    return 0;
}
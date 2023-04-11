#pragma warning(disable: 4996)
#include<stdio.h>
/*
使用sscanf读取"[02:06:85]" 02代表分钟，06代表秒，放入整型变量min、sec中
*/
int main(){
    int min, sec;
    sscanf("[02:06:85]","[%2d:%2d", &min, &sec);
    printf("min = %02d\nsec = %02d\n",min, sec);
    return 0;
}
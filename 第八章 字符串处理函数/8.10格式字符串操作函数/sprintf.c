#pragma warning(disable: 4996)
#include<stdio.h>

int main(){
    char buf[100];
    sprintf(buf, "%d:%d:%s", 2013, 12, "01");
    printf("buf = %s\n", buf);
    return 0;
}
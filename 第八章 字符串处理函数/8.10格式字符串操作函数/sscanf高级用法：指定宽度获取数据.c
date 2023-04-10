#pragma warning(disable: 4996)
#include<stdio.h>

int main(){
    char buf[20];
    sscanf("1234567890","%s",buf);
    printf("buf = %s\n", buf);
    sscanf("abcdefgh", "%4s", buf);
    printf("buf = %s\n", buf);
    sscanf("abcd efgh", "%6s", buf);
    printf("buf = %s\n", buf); //拿不到空格
    return 0;
}
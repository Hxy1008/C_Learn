/*
使用sscanf获取#和@之间的字符串
*/
#include<stdio.h>
int main(){
    char buf[100];
    char buf2[10];
    char* a = "asdf#sdjd@djfkd";
    sscanf(a, "%*[^#]%[^@]", buf);
    sscanf(a, "%*1[^#]%s", buf2);
    printf("buf = %s\n", buf);
    printf("buf2 = %s\n", buf2);
    // char* a = "123456asdfjhs132134";
    // sscanf(a, "%*d%[^0-9]s", buf);
    // printf("buf = %s\n", buf);
}
#pragma warning(disable: 4996)
#include<stdio.h>

int main(){
    char buf[20];
    sscanf("[ti:�򵥰�]", "%*[^:]:%[^]]", buf);
    // sscanf("[ti:�򵥰�]", "%*[^:]%*c%[^]]", buf);
    printf("buf = %s\n", buf);
    return 0;
}
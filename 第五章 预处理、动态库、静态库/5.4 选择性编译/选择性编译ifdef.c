#include<stdio.h>
int main(){
    #ifdef AAA
    printf("Hello World\n");
    #else
    printf("Hello America\n");
    #endif
    return 0;
}
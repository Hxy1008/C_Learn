#include<stdio.h>

int main(){
    struct stu{
        int num;
        char name[20];
        int sex;
    };
    struct stu lucy, bob, lilei;


    printf("%d\n", sizeof(lucy));

    return 0;
}
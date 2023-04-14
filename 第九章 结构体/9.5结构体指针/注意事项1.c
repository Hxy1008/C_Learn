#include<stdio.h>
#include<string.h>
#pragma warning(disable: 4996)
typedef struct stu{
    int num;
    char name[20];
    float score;
}STU;

int main(){
    STU boy;
    printf("&boy = %p\n&(boy.num) = %p\n", &boy, &(boy.num));
    return 0;
}
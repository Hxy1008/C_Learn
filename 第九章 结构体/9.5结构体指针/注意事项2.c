#include<stdio.h>
#include<string.h>
#pragma warning(disable: 4996)
typedef struct stu{
    int num;
    char name[20];
    float score;
}STU;

int main(){
    struct stu edu[3] = {
        {101, "Lucy", 95.f},
        {102, "Bob", 88.3f},
        {103, "Lilei", 93.7f}
    };
    printf("edu = %p\n", edu);
    printf("&edu[0] = %p\n", &edu[0]);
    printf("&(edu[0].num) = %p\n", &(edu[0].num));
    return 0;
}
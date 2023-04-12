#include<stdio.h>
#include<string.h>

struct birthday{
    int year;
    int month;
    int day;
};

struct stu{
    int num;
    char name[20];
    int score;
    char* addr;
    struct birthday date;
};

int main(){
    struct stu bob;
    printf("%d\n", sizeof(bob));
    printf("%d\n", sizeof(bob.num));
    printf("%d\n", sizeof(bob.name));
    printf("%d\n", sizeof(bob.score));
    printf("%d\n", sizeof(bob.addr));
    return 0;
}
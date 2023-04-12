#include<stdio.h>
#include<string.h>

struct date{
    int year;
    int month;
    int day;
};

struct stu{
    int num;
    char name[20];
    int score;
    char* addr;
    struct date birthday;
};

int main(){
    struct stu bob;
    bob.birthday.year = 2001;
    printf("bob.birthday.year = %d\n", bob.birthday.year);

    struct stu lucy = {
        1,
        "lucy",
        100,
        "beijing",
        {
            2001, 10, 12
        }
    };
    return 0;
}
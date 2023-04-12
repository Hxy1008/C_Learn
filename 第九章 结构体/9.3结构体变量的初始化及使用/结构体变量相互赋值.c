#include<stdio.h>
#include<string.h>

struct stu{
          int num;
          char name[20];
          char sex;
          char* addr;
};

int main()                                 
{   
    struct stu bob = {
        101,
        "bob",
        "m",
        "beijing"
    };
    struct stu lilei;
    lilei = bob;
    printf("lilei.name = %s\n", lilei.name);
    return 0;
}
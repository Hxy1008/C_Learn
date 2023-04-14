#include<stdio.h>
#include<string.h>

typedef struct stu{
    int num;
    char name[20];
};

int main(){
    struct stu boy = {101, "lilei"};
    struct stu* p = &boy;
    printf("sizeof(p) = %d\n", sizeof(p));
    printf("boy.num = %d\n", boy.num);
    printf("boy.num = %d\n", (*p).num);
    printf("boy.num = %d\n", p->num);
    return 0;
}
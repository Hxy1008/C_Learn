#include<stdio.h>
struct stu{
    double a;
    char b;

};

int main(){
    struct stu boy;
    printf("sizeof(boy) = %d\n", sizeof(boy));
    printf("&boy = %p\n", &boy);
    printf("&boy.a = %p\n", &boy.a);
    printf("boy.b = %p\n", &boy.b);
    return 0;
}
#include<stdio.h>
#include<string.h>

typedef struct stu{
    int num;
    char name[20];
    float score;
}STU;


void func(STU *p){
    p->num = 101;
    strcpy(p->name, "Bob");
    (*p).score = 100.f;
}
int main(){
    STU boy;
    func(&boy);
    printf("boy.num = %d\n", boy.num);
    printf("boy.name = %s\n", boy.name);
    printf("boy.score = %.2f\n", boy.score);
    return 0;
}
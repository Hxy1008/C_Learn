#include<stdio.h>
#include<string.h>
#pragma warning(disable: 4996)
typedef struct stu{
    int num;
    char name[20];
    float score;
}STU;


void func(STU* p, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("p[%d].num = %d\np[%d].name = %s\np[%d].score = %.2f\n",i, p[i].num,i, p[i].name, i, p[i].score);
    }
}
int main(){
    struct stu edu[3] = {
        {101, "Lucy", 95.f},
        {102, "Bob", 88.3f},
        {103, "Lilei", 93.7f}
    };
    func(edu, 3);
    return 0;
}
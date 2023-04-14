#include<stdio.h>
#include<string.h>

typedef struct stu{
    int num;
    char name[20];
    float score;
}STU;

int main(){
    STU *p, lucy;
    p = &lucy; 
    p->num = 100;
    strcpy(p->name, "baby");
    
    return 0;
}

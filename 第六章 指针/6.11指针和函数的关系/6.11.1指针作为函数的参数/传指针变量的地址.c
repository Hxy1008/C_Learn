#include<stdio.h>
void func(char** p1){
    *p1 = "hello ketty";
}
int main(){
    char* p = "hello world";
    func(&p);
    printf("%s\n", p);
    return 0;
}
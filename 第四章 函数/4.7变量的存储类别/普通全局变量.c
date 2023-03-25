#include <stdio.h>
#include"func2.h"
int num; //不赋初值则默认为0
void func(void);
int main(){
    printf("in main num = %d\n", num);
    num = 100;
    func();
    func2();
    return 0;
}
void func(void){
    printf("in func num = %d\n", num);
}
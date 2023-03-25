#include<stdio.h>
static int num;
void func3();
int main(){
    printf("before chu zhi num = %d\n", num);
    func3();
    num = 101;
    printf("in main &num = %p\n", &num);
    func3();
    func4();
    return 0;
}
void func3(){
    printf("in func3 &num = %p\n", &num);
    printf("in func3 num = %d\n", num);
}
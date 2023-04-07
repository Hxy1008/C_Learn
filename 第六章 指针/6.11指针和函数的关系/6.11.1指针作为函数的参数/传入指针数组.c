#include<stdio.h>
void func(char** q, int x){
    int i;
    for(i=0;i<x;i++){
        printf("q[%d] = %s\n", i, q[i]);
    }

}
int main(){
    char* p[3] = {"hello world", "hello kitty", "love"}; // p[0] p[1] p[2]都是char* 类型的指针
    printf("*p = %p\n", *p);
    printf("p = %p\n", p);
    printf("%s\n", *p);
    func(p, 3);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
void func(){
    char *p;
    p = (char*)malloc(100);
}
int main(int argc, char* argv[]){
    func(); // p是局部变量，函数结束了以后，p被释放，但是动态申请的内存在堆区中，没有释放
    func(); // 调用几次func就泄漏几次 ，如果配上循环的话，后果严重
    return 0;
}
// 解决办法1.在函数最后加上free（p）
// 解决办法2.把函数的返回值设置成指针类型，在外面用一个变量接收地址，并在使用完后free
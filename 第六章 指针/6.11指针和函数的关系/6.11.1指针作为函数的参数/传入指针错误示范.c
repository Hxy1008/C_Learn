#include<stdio.h>
void swap(int *p1, int *p2){
    int *p;
    p = p1;
    p1 = p2;
    p2 = p;
}
int main(){
    int a = 10, b = 20;
    swap(&a, &b);
    printf("a = %d\nb = %d\n", a, b);
    return 0;
}
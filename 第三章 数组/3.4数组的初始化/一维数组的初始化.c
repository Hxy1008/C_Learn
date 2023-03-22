#include<stdio.h>
int main(){
    int a[5] = {2,4,7,6,8};
    int b[5] = {2,4,3};
    int i;
    int n = 0;

    //int c[5] = {2, , 3, 5,7};  wrong
    for(i = 0; i <= 4; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    while(n <= 4){
        printf("b[%d] = %d\n", n, b[n]);
        n++;
    }
    return 0;
}
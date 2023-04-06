#include<stdio.h>
void print(int* p) //(int p[]) 还可以酱紫传参！！！！
{
    int i;
    for(i = 0; i < 10; i++){
        printf("a[%d] = %d\n", i, p[i]);
    }
    *(p + 2) = 100;
}
int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,0};
    print(a);
    printf("a[2] = %d\n", a[2]);
    return 0;
}
#include<stdio.h>
int main(){
    int a[3][4][5] = {
        {  
            {1,2,3,4,5},
            {6,7,8,9,0}
        }
    };
    int(*p)[4][5];
    p = a;
    printf("a = %p\n", a);
    printf("p + 1 = %p\n", p + 1);
    printf("p[0][0][1] = %d\n", p[0][0][1]);
    printf("*(p[0][0]+1) = %d\n", *(p[0][0]+1));
    return 0;
}
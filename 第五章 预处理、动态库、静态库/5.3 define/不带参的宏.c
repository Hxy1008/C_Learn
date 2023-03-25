#include<stdio.h>
#define PI 3.1415926567
int main(){
    double f;
    printf("PI = %lf\n", PI);
    f = PI;
    printf("f = %lf\n", f);
    #undef PI //后面不要加分号


    #define PI 3.14
    printf("PI = %lf", PI);
    return 0;
    
}
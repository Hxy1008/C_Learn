#include <stdio.h>
// int main(){
//     printf("%d\n", 'A');
//     return 0;
// }
// int main(){
//     printf("%lf\n", 5.0f/2);
//     printf("%f\n",5.0/2);
//     return 0;
// }
// int main(){
//     int a = -8;
//     unsigned int b = 7;
//     if(a+b > 0){
//         printf("a+b > 0\n");
//         printf("a+b = %x\n",a+b);
//     }
//     else if(a+b < 0){
//         printf("a+b < 0\n");
//     }
//     else{
//         printf("a+b = 0\n");
//     }
//     return 0;
// }
int main(){
    int a = 1;
    float b = 5.8f;
    a = b;
    printf("a = %d\n", a);
    return 0;
}
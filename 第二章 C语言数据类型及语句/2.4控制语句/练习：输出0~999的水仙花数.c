#include<stdio.h>
// int main(){
//     int i = 0, a, b, c;
//     for(i = 0; i <= 999; i++){
//         if(i < 10){
//             if(i == i*i*i){
//                 printf("%d\n", i);
//             }
//         }
//         else if(i < 100){
//             c = i % 10;
//             b = i / 10;
//             if(i == (b*b*b)+(c*c*c)){
//                 printf("%d\n", i);
//             }
//         }
//         else{
//             a = i / 100;
//             b = (i % 100) / 10;
//             c = (i % 100) % 10;
//             if(i == (a*a*a)+(b*b*b)+(c*c*c)){
//                 printf("%d\n", i);
//             }
//         }
//     }
//     return 0;
// }
int main(){
    int i = 0, a, b, c;
    for(i = 0; i <= 999; i++){
        a = i / 100;
        b = i % 100 / 10;
        c = i % 10;
        if(i == (a*a*a)+(b*b*b)+(c*c*c)){
                 printf("%d\n", i);
        }
    }
}
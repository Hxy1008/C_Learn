#include<stdio.h>
int main(){
    int i,j;
    for(i = 1; i <= 9; i++){
        for(j = 1; j <= i; j++){
            // if (j != i){
            //     printf("%d��%d=%d ", j, i, i*j);
            // }
            // else{
            //    printf("%d��%d=%d\n", j, i, i*j); 
            // }
            printf("%d��%d=%d ", j, i, i*j);
        }
        printf("\n");
    }
    return 0;
}
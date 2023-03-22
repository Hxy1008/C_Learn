#include<stdio.h>
int main(){
    int a[3][4] = {{1,2,3,4}, {5,6}, {5}};
    int b[3][4] = {1,2,3,4,5,6,7,8,9,10};
    int i ,j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("a[%d][%d] = %d  ", i, j, a[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("b[%d][%d] = %d  ", i, j, b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
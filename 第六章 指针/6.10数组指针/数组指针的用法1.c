#include<stdio.h>

void func(int(*p)[5], int x, int y){
    p[1][2] = 100;
}

int main(){
    int i,j;
    int a[3][5] = {
        {1,2,3,4,5},
        {6,7,8,9,0},
        {11,12,13,14,15}
    };
    func(a,3,5);
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
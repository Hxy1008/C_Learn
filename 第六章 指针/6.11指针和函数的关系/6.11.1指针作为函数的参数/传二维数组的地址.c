#include<stdio.h>
void print(int(* p)[4], int x, int y)
{
    int i, j;
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            printf("a[%d][%d] = %d  ", i, j, p[i][j]);
        }
        printf("\n");
    }
    *(*(p+1) + 3) = 1000;
}
int main(){
    int a[][4] = {
        {0,1,2,3},
        {4,5,6},
        {7,8,9,100}
    };
    print(a, 3, 4);
    printf("%d\n", a[1][3]);
    return 0;
}
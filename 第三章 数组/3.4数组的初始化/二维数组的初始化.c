#include<stdio.h>
int main(){
    int a[2][2] = {
        {1,2},
        {4,5}
    };
    int i,j;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("a[%d][%d] = %d  ", i, j, a[i][j]);
        }
        printf("\n");
    }
    int b[3][3] = {{1,2},{1}};
    int n,m;
    for(n = 0; n < 3; n++){
        for(m = 0; m < 3; m++){        
            printf("b[%d][%d] = %d   ",n, m, b[n][m]);
        }
        printf("\n");
    }
    int c[2][3] = {2,5,4,2,3,4};
    int d[2][3] = {3,5,6,8};
    for(n = 0; n < 2; n++){
        for(m = 0; m < 3; m++){        
            printf("c[%d][%d] = %d   ",n, m, c[n][m]);
        }
        printf("\n");
    }
    for(n = 0; n < 2; n++){
        for(m = 0; m < 3; m++){        
            printf("d[%d][%d] = %d   ",n, m, d[n][m]);
        }
        printf("\n");
    }
    return 0;
}
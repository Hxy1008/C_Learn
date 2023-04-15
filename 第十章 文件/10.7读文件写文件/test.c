#include<stdio.h>

int main(){
    FILE* p;
    int i;
    char num[10];
    p = fopen("D:\\data\\新建文件夹\\C_learn\\第十章 文件\\test\\a6.txt", "rb");
    if(p == NULL){
        perror("fopen");
        return 0;
    }
    fread(num, 1, 10, p);
    for(i=0;i<10;i++){
        printf("num[%d] = %c\n", i, num[i]);
    }
    return 0;
}
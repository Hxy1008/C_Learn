#include<stdio.h>

int main(){
    FILE* p;
    int i;
    char ch;
    p = fopen("D:\\data\\新建文件夹\\C_learn\\第十章 文件\\test\\a1.txt", "r+");
    if(p == NULL){
        // printf("打开失败\n");
        perror("fopen");
        return 0;
    }
    printf("打开文件a1.txt成功\n");
    while((ch = fgetc(p)) != EOF){
        printf("%c", ch);
    }
    printf("\n");
    i = fclose(p);
    if(i != 0){
        printf("关闭文件失败\n");
    }
    printf("关闭文件a1.txt成功\n");
    return 0;
}
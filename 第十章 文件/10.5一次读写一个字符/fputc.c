#include<stdio.h>

int main(){
    FILE* p;
    FILE* q;
    int i1, i2;
    char ch;
    p = fopen("D:\\data\\新建文件夹\\C_learn\\第十章 文件\\test\\a1.txt", "r+");
    q = fopen("D:\\data\\新建文件夹\\C_learn\\第十章 文件\\test\\a2.txt", "w+");
    if(p == NULL){
        // printf("打开失败\n");
        perror("fopen");
        return 0;
    }
    if(q == NULL){
        // printf("打开失败\n");
        perror("fopen");
        return 0;
    }
    printf("打开文件a1.txt成功\n");
    printf("打开文件a2.txt成功\n");
    while((ch = fgetc(p)) != EOF){
        fputc(ch, q);
    }
    i1 = fclose(p);
    i2 = fclose(q);
    if(i1 != 0){
        printf("关闭文件失败\n");
    }
    if(i2 != 0){
        printf("关闭文件失败\n");
    }
    printf("关闭文件a1.txt成功\n");
    printf("关闭文件a2.txt成功\n");
    return 0;
}
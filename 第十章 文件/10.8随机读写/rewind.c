#include<stdio.h>

int main(){
    FILE* p;
    char str[11];
    p = fopen("D:\\data\\�½��ļ���\\C_learn\\��ʮ�� �ļ�\\test\\a7.txt", "r+");
    fread(str, 1, 11, p);
    printf("str = %s\n", str);
    rewind(p);
    fwrite("abcdefghijklmnopqrstuvwxyz", 1, 26, p);
    
    return 0;
}
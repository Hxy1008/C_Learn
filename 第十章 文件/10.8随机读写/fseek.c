// ��һ��δ֪��С���ļ���ȫ�������ڴ棬����ʾ����Ļ��
#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main(){
    FILE* p;
    char* q;
    long int fp_long;
    p = fopen("D:\\data\\�½��ļ���\\C_learn\\��ʮ�� �ļ�\\test\\a8.txt", "rb");
    if(p == NULL){
        perror("fopen");
        return 0;
    }
    fseek(p, 0, SEEK_END);
    fp_long = ftell(p);
    rewind(p);
    q = (char*)malloc(fp_long + 1);
    if(q == NULL){
        perror("malloc");
        return 0;
    }
    fread(q, fp_long, 1, p);
    q[fp_long] = '\0';
    printf("q = %s\n", q);
    free(q);
    fclose(p);
    return 0;

}
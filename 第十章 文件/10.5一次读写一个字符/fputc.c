#include<stdio.h>

int main(){
    FILE* p;
    FILE* q;
    int i1, i2;
    char ch;
    p = fopen("D:\\data\\�½��ļ���\\C_learn\\��ʮ�� �ļ�\\test\\a1.txt", "r+");
    q = fopen("D:\\data\\�½��ļ���\\C_learn\\��ʮ�� �ļ�\\test\\a2.txt", "w+");
    if(p == NULL){
        // printf("��ʧ��\n");
        perror("fopen");
        return 0;
    }
    if(q == NULL){
        // printf("��ʧ��\n");
        perror("fopen");
        return 0;
    }
    printf("���ļ�a1.txt�ɹ�\n");
    printf("���ļ�a2.txt�ɹ�\n");
    while((ch = fgetc(p)) != EOF){
        fputc(ch, q);
    }
    i1 = fclose(p);
    i2 = fclose(q);
    if(i1 != 0){
        printf("�ر��ļ�ʧ��\n");
    }
    if(i2 != 0){
        printf("�ر��ļ�ʧ��\n");
    }
    printf("�ر��ļ�a1.txt�ɹ�\n");
    printf("�ر��ļ�a2.txt�ɹ�\n");
    return 0;
}
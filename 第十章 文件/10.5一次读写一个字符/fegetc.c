#include<stdio.h>

int main(){
    FILE* p;
    int i;
    char ch;
    p = fopen("D:\\data\\�½��ļ���\\C_learn\\��ʮ�� �ļ�\\test\\a1.txt", "r+");
    if(p == NULL){
        // printf("��ʧ��\n");
        perror("fopen");
        return 0;
    }
    printf("���ļ�a1.txt�ɹ�\n");
    while((ch = fgetc(p)) != EOF){
        printf("%c", ch);
    }
    printf("\n");
    i = fclose(p);
    if(i != 0){
        printf("�ر��ļ�ʧ��\n");
    }
    printf("�ر��ļ�a1.txt�ɹ�\n");
    return 0;
}
#include<stdio.h>

int main(){
    FILE* p;
    int i;
    p = fopen("D:\\data\\�½��ļ���\\C_learn\\��ʮ�� �ļ�\\test\\a1.txt", "w+");
    if(p == NULL){
        // printf("��ʧ��\n");
        perror("fopen");
        return 0;
    }
    printf("���ļ�a1.txt�ɹ�\n");
    i = fclose(p);
    if(i != 0){
        printf("�ر��ļ�ʧ��\n");
    }
    printf("�ر��ļ�a1.txt�ɹ�\n");
    return 0;
}
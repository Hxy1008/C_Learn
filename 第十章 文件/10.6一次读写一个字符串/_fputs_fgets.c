#include<stdio.h>

int main(){
    FILE *fp_read, *fp_write;
    char p[100];
    fp_read = fopen("D:\\data\\�½��ļ���\\C_learn\\��ʮ�� �ļ�\\test\\a3.txt", "r");
    fp_write = fopen("D:\\data\\�½��ļ���\\C_learn\\��ʮ�� �ļ�\\test\\a4.txt", "w");
    while(fgets(p, 100, fp_read) != NULL){
        fputs(p, stdout);
        printf("%s\n", p);
        fputs(p, fp_write);
    }
    fclose(fp_read);
    fclose(fp_write);
    return 0;
}
#include<stdio.h>

struct stu{
    char name[10];
    int num;
    int age;
}boya[2], boyb[2];

int main(){
    FILE *fp1;
    int i;
    fp1 = fopen("D:\\data\\�½��ļ���\\C_learn\\��ʮ�� �ļ�\\test\\a5.txt", "wb+");
    if(fp1 == NULL){
        perror("fopen");
        return 0;
    }
    for(i=0;i<2;i++){
        printf("�������%d���ṹ���name num age:\n", i);
        scanf("%s %d %d", boya[i].name, &(boya[i].num), &(boya[i].age));
    }
    fwrite(boya, sizeof(struct stu), 2, fp1);
    rewind(fp1);
    fread(boyb, sizeof(struct stu), 2, fp1);

    printf("%s %d %d\n", boyb[0].name, boyb[0].num, boyb[0].age);
    printf("%s %d %d\n", boyb[1].name, boyb[1].num, boyb[1].age);
    fclose(fp1);
    return 0;
}
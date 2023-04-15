#include<stdio.h>

struct stu{
    char name[10];
    int num;
    int age;
}boya[2], boyb[2];

int main(){
    FILE *fp1;
    int i;
    fp1 = fopen("D:\\data\\新建文件夹\\C_learn\\第十章 文件\\test\\a5.txt", "wb+");
    if(fp1 == NULL){
        perror("fopen");
        return 0;
    }
    for(i=0;i<2;i++){
        printf("请输入第%d个结构体的name num age:\n", i);
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
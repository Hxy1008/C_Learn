#include<stdio.h>
#include<conio.h>
int main(){
    srand(time(NULL));
    char zanting;
    while(1){
    printf("**************************************\t\n");
    printf("* ����������޷��˳���                  \t*\n");
    printf("* �밴������ĸ�û����̣�                \t*\n");
    printf("* �밴�������ʼ���ԣ���������ĸ��ʼ��ʱ��\t*\n");
    printf("* �����������_��ʾ                     \t*\n");
    printf("***************************************\t\n");
    zanting = _getch();
    int zimu[50];
    int i, num, start_time, end_time, flag;
    char ch;
    float tp;
    for(i = 0; i < 50; i++){
        num = (rand() % 26) + 97;
        zimu[i] = num;
    }
    for(i = 0; i < 50; i++){
        printf("%c", zimu[i]);
    }
    printf("\n");
    flag = 0;
    start_time = time(NULL);
    for(i = 0; i < 50; i++){
        ch = getch();
        if(ch != zimu[i]){
            printf("_");
        }
        else{
            printf("%c", ch);
            flag = flag + 1;
        }
    }
    end_time = time(NULL);
    tp = (float)(flag * 100) / 50;
    printf("\n");
    printf("��ʱ%d��\n��ȷ��Ϊ%.2f\n", end_time - start_time, tp);
    flag = 0;
    printf("���¿ո��������ESC�˳�\n");
    while(1){
        zanting = _getch();
        if (zanting == ' '){
            break;
        }
        else if(zanting == 27){
            return 0;
        }
    }
    system("cls");
    }
}
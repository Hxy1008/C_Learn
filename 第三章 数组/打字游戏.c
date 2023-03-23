#include<stdio.h>
#include<conio.h>
int main(){
    srand(time(NULL));
    char zanting;
    while(1){
    printf("**************************************\t\n");
    printf("* 输入过程中无法退出！                  \t*\n");
    printf("* 请按所给字母敲击键盘！                \t*\n");
    printf("* 请按任意键开始测试，按下首字母开始计时！\t*\n");
    printf("* 输入出错则以_表示                     \t*\n");
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
    printf("用时%d秒\n正确率为%.2f\n", end_time - start_time, tp);
    flag = 0;
    printf("按下空格键继续，ESC退出\n");
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
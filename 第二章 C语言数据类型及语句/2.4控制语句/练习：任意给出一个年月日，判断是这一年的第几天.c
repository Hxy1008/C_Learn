#include<stdio.h>
int main(){
    int y, m, d, num;
    printf("请输入年月日：");
    scanf_s("%d%d%d", &y, &m, &d);
    if(((y % 4 == 0) && (y % 100 != 0))||(y % 400 == 0)){
        switch(m){
            case 1:
            num = d;
            printf("是一年的第%d天\n", num);
            break;
            case 2:
            num = d + 31;
            printf("是一年的第%d天\n", num);
            break;
            case 3:
            num = d + 31 + 29;
            printf("是一年的第%d天\n", num);
            break;
            case 4:
            num = d + 31 + 29 + 31;
            printf("是一年的第%d天\n", num);
            break;
            case 5:
            num = d + 31 + 29 + 31 + 30;
            printf("是一年的第%d天\n", num);
            break;
            case 6:
            num = d + 31 + 29 + 31 + 30 + 31;
            printf("是一年的第%d天\n", num);
            break;
            case 7:
            num = d + 31 + 29 + 31 + 30 + 31 + 30;
            printf("是一年的第%d天\n", num);
            break;
            case 8:
            num = d + 31 + 29 + 31 + 30 + 31 + 30 + 31;
            printf("是一年的第%d天\n", num);
            break;
            case 9:
            num = d + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
            printf("是一年的第%d天\n", num);
            break;
            case 10:
            num = d + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
            printf("是一年的第%d天\n", num);
            break;
            case 11:
            num = d + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
            printf("是一年的第%d天\n", num);
            break;
            case 12:
            num = d + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
            printf("是一年的第%d天\n", num);
            break;
            default:
            printf("输入的月份有错误，请重新输入");
        }
    }
    else{
        switch(m){
            case 1:
            num = d;
            printf("是一年的第%d天\n", num);
            break;
            case 2:
            num = d + 31;
            printf("是一年的第%d天\n", num);
            break;
            case 3:
            num = d + 31 + 28;
            printf("是一年的第%d天\n", num);
            break;
            case 4:
            num = d + 31 + 28 + 31;
            printf("是一年的第%d天\n", num);
            break;
            case 5:
            num = d + 31 + 28 + 31 + 30;
            printf("是一年的第%d天\n", num);
            break;
            case 6:
            num = d + 31 + 28 + 31 + 30 + 31;
            printf("是一年的第%d天\n", num);
            break;
            case 7:
            num = d + 31 + 28 + 31 + 30 + 31 + 30;
            printf("是一年的第%d天\n", num);
            break;
            case 8:
            num = d + 31 + 28 + 31 + 30 + 31 + 30 + 31;
            printf("是一年的第%d天\n", num);
            break;
            case 9:
            num = d + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
            printf("是一年的第%d天\n", num);
            break;
            case 10:
            num = d + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
            printf("是一年的第%d天\n", num);
            break;
            case 11:
            num = d + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
            printf("是一年的第%d天\n", num);
            break;
            case 12:
            num = d + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
            printf("是一年的第%d天\n", num);
            break;
            default:
            printf("输入的月份有错误，请重新输入");
            break;
        }
    }
    return 0;
}
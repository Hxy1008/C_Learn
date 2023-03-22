#include<stdio.h>
int main(){
    int year, month, day, sum;
    int a[11] = {31,28,31,30,31,30,31,31,30,31,30};
    scanf_s("%d%d%d", &year, &month, &day);
    switch(month){
        case 1:
        sum = day;
        break;
        case 2:
        sum = day + a[0];
        break;
        case 3:
        sum = day + a[0] + a[1];
        break;
        case 4:
        sum = day + a[0] + a[1] + a[2];
        break;
        case 5:
        sum = day + a[0] + a[1] + a[2] + a[3];
        break;
        case 6:
        sum = day + a[0] + a[1] + a[2] + a[3] + a[4];
        break;
        case 7:
        sum = day + a[0] + a[1] + a[2] + a[3] + a[4] + a[5];
        break;
        case 8:
        sum = day + a[0] + a[1] + a[2] + a[3] + a[4] + a[5] + a[6];
        break;
        case 9:
        sum = day + a[0] + a[1] + a[2] + a[3] + a[4] + a[5] + a[6] + a[7];
        break;
        case 10:
        sum = day + a[0] + a[1] + a[2] + a[3] + a[4] + a[5] + a[6] + a[7] + a[8];
        break;
        case 11:
        sum = day + a[0] + a[1] + a[2] + a[3] + a[4] + a[5] + a[6] + a[7] + a[8] + a[9];
        break;
        case 12:
        sum = day + a[0] + a[1] + a[2] + a[3] + a[4] + a[5] + a[6] + a[7] + a[8] + a[9] + a[10];
        break;
        default:
        printf("月份输入错误，请重新输入\n");
        break;
        

    }
    if((((year%4==0)&&(year%100!=0))||(year%400==0))&& (month > 2)){
        sum = sum + 1;
    }
    printf("是第%d天\n", sum);
    return 0;
}
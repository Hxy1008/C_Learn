#include<stdio.h>
int main(){
    int y, m, d, num;
    printf("�����������գ�");
    scanf_s("%d%d%d", &y, &m, &d);
    if(((y % 4 == 0) && (y % 100 != 0))||(y % 400 == 0)){
        switch(m){
            case 1:
            num = d;
            printf("��һ��ĵ�%d��\n", num);
            break;
            case 2:
            num = d + 31;
            printf("��һ��ĵ�%d��\n", num);
            break;
            case 3:
            num = d + 31 + 29;
            printf("��һ��ĵ�%d��\n", num);
            break;
            case 4:
            num = d + 31 + 29 + 31;
            printf("��һ��ĵ�%d��\n", num);
            break;
            case 5:
            num = d + 31 + 29 + 31 + 30;
            printf("��һ��ĵ�%d��\n", num);
            break;
            case 6:
            num = d + 31 + 29 + 31 + 30 + 31;
            printf("��һ��ĵ�%d��\n", num);
            break;
            case 7:
            num = d + 31 + 29 + 31 + 30 + 31 + 30;
            printf("��һ��ĵ�%d��\n", num);
            break;
            case 8:
            num = d + 31 + 29 + 31 + 30 + 31 + 30 + 31;
            printf("��һ��ĵ�%d��\n", num);
            break;
            case 9:
            num = d + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
            printf("��һ��ĵ�%d��\n", num);
            break;
            case 10:
            num = d + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
            printf("��һ��ĵ�%d��\n", num);
            break;
            case 11:
            num = d + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
            printf("��һ��ĵ�%d��\n", num);
            break;
            case 12:
            num = d + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
            printf("��һ��ĵ�%d��\n", num);
            break;
            default:
            printf("������·��д�������������");
        }
    }
    else{
        switch(m){
            case 1:
            num = d;
            printf("��һ��ĵ�%d��\n", num);
            break;
            case 2:
            num = d + 31;
            printf("��һ��ĵ�%d��\n", num);
            break;
            case 3:
            num = d + 31 + 28;
            printf("��һ��ĵ�%d��\n", num);
            break;
            case 4:
            num = d + 31 + 28 + 31;
            printf("��һ��ĵ�%d��\n", num);
            break;
            case 5:
            num = d + 31 + 28 + 31 + 30;
            printf("��һ��ĵ�%d��\n", num);
            break;
            case 6:
            num = d + 31 + 28 + 31 + 30 + 31;
            printf("��һ��ĵ�%d��\n", num);
            break;
            case 7:
            num = d + 31 + 28 + 31 + 30 + 31 + 30;
            printf("��һ��ĵ�%d��\n", num);
            break;
            case 8:
            num = d + 31 + 28 + 31 + 30 + 31 + 30 + 31;
            printf("��һ��ĵ�%d��\n", num);
            break;
            case 9:
            num = d + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
            printf("��һ��ĵ�%d��\n", num);
            break;
            case 10:
            num = d + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
            printf("��һ��ĵ�%d��\n", num);
            break;
            case 11:
            num = d + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
            printf("��һ��ĵ�%d��\n", num);
            break;
            case 12:
            num = d + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
            printf("��һ��ĵ�%d��\n", num);
            break;
            default:
            printf("������·��д�������������");
            break;
        }
    }
    return 0;
}
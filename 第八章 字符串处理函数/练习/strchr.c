#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
/*
ͳ���ַ���"hellowrold helloworld helloworld helloworld"���ַ�w�ĸ�����λ��
*/

int main(){
    char* str = "hellowrold hellowworld helloworld helloworld";
    int num = 0, i = 0, j = 0;
    char* p, q;
    printf("str = %p\n", str);
    while(strchr((str + j + 1), 'w') != NULL){
        p = strchr((str + j + 1), 'w');
        printf("��ַΪ��%p\n", p);
        i++;
        j = p - str;
    }
    printf("һ����%d��\n", i);
    return 0;
}
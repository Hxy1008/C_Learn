/*
����Ϊ�����ֻ��յ��Ķ��ŵĸ�ʽ��������ָ��������strtok �����������
char msg_src[]="+CMGR:REC UNREAD,+8613466630259,98/10/01,18:22:11+00,ABCdefGHI";
�ο����µĺ��������Լ������������Ӧ��Ҫ��
int msg deal(char* msg_src, char* msg_done[], char* str);
����1�����и��ַ������׵�ַ
����2��ָ�����飬����и����ַ������׵�ַ
����3���и��ַ�
����ֵ���и���ַ���������

�ֻ��ţ�13466630259
���ڣ�98/10/01
ʱ�䣺18:22:11
���ݣ�ABCdefGHI
*/
#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>


int msg_deal(char* msg_src, char* msg_done[], char* str){
        int i = 0;
        msg_done[i] = strtok(msg_src, str);
        while(msg_done[i] != NULL){
            i++;
            msg_done[i] = strtok(NULL, str);
        }
        return i;
    }
int main(int argc, char* argv[]){
    char msg_src[]="+CMGR:REC UNREAD,+8613466630259,98/10/01,18:22:11+00,ABCdefGHI";
    char* msg_done[6];
    int result, i;
    result = msg_deal(msg_src, msg_done, ",");
    printf("result = %d\n", result);
    for(i=0;i<result;i++){
        printf("msg_done[%d] = %s\n", i, msg_done[i]);
    }
    printf("�ֻ��ţ�%s\n", msg_done[1] + 3);
    printf("���ڣ�%s\n", msg_done[2]);
    printf("ʱ�䣺%s\n", strtok(msg_done[3], "+"));
    printf("���ݣ�%s\n", msg_done[4]);
    return 0;
}
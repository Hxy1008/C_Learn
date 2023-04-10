/*
以下为我们手机收到的短信的格式，请利用指针数组于strtok 函数对其解析
char msg_src[]="+CMGR:REC UNREAD,+8613466630259,98/10/01,18:22:11+00,ABCdefGHI";
参考以下的函数名字以及参数，完成相应的要求
int msg deal(char* msg_src, char* msg_done[], char* str);
参数1：带切割字符串的首地址
参数2：指针数组，存放切割完字符串的首地址
参数3：切割字符
返回值：切割的字符串总数量

手机号：13466630259
日期：98/10/01
时间：18:22:11
内容：ABCdefGHI
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
    printf("手机号：%s\n", msg_done[1] + 3);
    printf("日期：%s\n", msg_done[2]);
    printf("时间：%s\n", strtok(msg_done[3], "+"));
    printf("内容：%s\n", msg_done[4]);
    return 0;
}
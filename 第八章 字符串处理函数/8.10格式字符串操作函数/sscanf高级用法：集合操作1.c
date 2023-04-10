#pragma warning(disable: 4996)
#include<stdio.h>
int main(){
    char buf[100];
    sscanf("abdwf123mnftsUITsfs", "%[a-z]s", buf);
    printf("buf = %s\n", buf);
    sscanf("abdwf123mnftsUITsfs", "%[a-z0-9A-Z]s", buf);
    printf("buf = %s\n", buf);
    sscanf("abdwf1   23mnftsUITsfs", "%[a-z0-9A-Z]s", buf);//拿不到空格
    printf("buf = %s\n", buf);
    sscanf("abdwf12  3mnftsUITsfs", "%[a-z0-9A-Z ]s", buf);// 在格子里面加一个空格，就可以匹配空格
    printf("buf = %s\n", buf);
    return 0;

}
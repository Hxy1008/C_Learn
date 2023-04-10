#pragma warning(disable: 4996)
#include<stdio.h>
int main(){
    char buf[50];
    sscanf("aad0a5ad5FFffk780ad9fFafjdl", "%[a0dF5]s", buf);
    printf("buf = %s\n", buf);
    sscanf("fdeo    5609DtYfkadj", "%[^0]s", buf);//可以拿到空格
    printf("buf = %s\n", buf);
    sscanf("ABAA   FDFKD5609DsfadatYfkadj", "%[^a-z]s", buf);
    printf("buf = %s\n", buf);
    sscanf("ABAA   FDFKD5609DsfadatYfkadj", "%[^a-z0-9]s", buf);
    printf("buf = %s\n", buf);
    return 0;
}
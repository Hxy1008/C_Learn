#include<stdio.h>

int main(){
    char buf[20];
    sscanf("fdeo5609DtYfkadj", "%[^a-z]s", buf);
    printf("buf = %s\n", buf);
}

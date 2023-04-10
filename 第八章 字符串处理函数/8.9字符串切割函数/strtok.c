#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>

int main(){
    char str[100] = "xiaoming:21,,,.ÄÐ.Å®,±±¾©:haidian";
    printf("str = %s\n", str);
    char* p[7];
    int i = 0;
    p[i] = strtok(str, ":,.");
    printf("p[%d] = %s\n", i, p[i]);
    printf("str = %s\n", str);
    while(p[i] != NULL){
        i++;
        p[i] = strtok(NULL, ":,.");
        
    }
    int j = 0;
    for(j = 0; j<i;j++){
        printf("p[%d] = %s\n", j, p[j]);
    }
    printf("%s\n", p[1]+3);
    return 0;
}
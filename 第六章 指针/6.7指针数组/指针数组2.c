#include<stdio.h>
int main(int argc, char *argv[]){
    char *name[5] = {"hello","China","beijing","project","Computer"};
    int i;
    for(i=0;i<5;i++){
        printf("%s\n",name[i]);
        printf("%c\n",*name[i]);
    }
    return 0;
}
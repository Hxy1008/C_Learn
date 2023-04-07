#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char* argv[]){
    int i, *array, n;
    printf("请输入您要申请的数组元素个数\n");
    scanf_s("%d", &n, 4);
    array = (int*)malloc(n*sizeof(int));
    if(array == NULL){
        printf("申请内存失败\n");
        return 0;
    }
    for(i = 0;i<n;i++){
        array[i] = i;
    }
    for(i = 0;i<n;i++){
        printf("array[%d] = %d\n", i, array[i]);
    }
    free(array);

    return 0;
}
#include<stdio.h>
int main(){
    char a[] = {'c', ' ', 'p', 'r', 'o', 'g'};
    char b[] = {"c prog"};
    printf("sizeof a = %d\nsizeof b = %d\n", sizeof(a), sizeof(b));
    printf("%s\n",a); // 会打印其它奇怪的东西
    printf("%s\n",b);
    // 输出结果b比a大一 因为字符串后面自动带了一个字符'\0'
    char str[15];
    printf("please input a str:\n");
    scanf_s("%s", &str);
    int i;
    for(i = 0; i < 15; i++){
        printf("str[%d] = %d6\n", i, str[i]);
    } 
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main(){
    //存放在数组中的字符串可以修改  前提数组没有被const修饰
    char str[100] = "I love C!";
    printf("str = %s\n", str);
    str [0] = 'Y';
    printf("str = %s\n", str);
    //文字常量区域的内容是不可被修改的
    char *string = "I love C";
    printf("char = %s\n", string);
    // *string = 'Y';
    // printf("char = %s\n", string);//这句话无法输出，因为出现了错误
   
    //堆区的字符串可以修改
    char *str1 = (char *)malloc(10);
    strcpy(str1, "I love C!");
    printf("str1 = %s", str1);
    *str1 = 'Y';
    printf("str1 = %s", str1);
    return 0;
}
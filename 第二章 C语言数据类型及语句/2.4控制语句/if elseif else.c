# include<stdio.h>
int main(){
    float score;
    printf("please input a score:\n");
    scanf("%f", &score);
    if (score < 0 || score > 100 ){
        printf("成绩错误,重新输入\n");
    }
    else if(score < 60){
        printf("E\n");
    }
    else if(score < 70){
        printf("D\n");
    }
    else if(score < 80){
        printf("C\n");
    }
    else if(score < 90){
        printf("B\n");
    }
    else{
        printf("A\n");
    }

    return 0;
}
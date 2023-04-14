#include<stdio.h>
#include<string.h>

typedef struct stu{
    int num;
    char name[20];
    float score;
}STU;

int main(){
    STU edu[3] = {
        {101, "Lucy", 78},
        {102, "Bob", 59.5},
        {103, "Tom", 85}
    };
    float avg = 0;
    int i;
    for(i=0;i<3;i++){
        avg = edu[i].score + avg;
    }
    avg = avg / 3;
    printf("avg = %.2f\n", (float)avg);
    return 0;
}
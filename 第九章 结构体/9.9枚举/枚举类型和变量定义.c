#include<stdio.h>

enum week{
    mon = 4,tue,wed,thu,fri = 4,sat,sun
};
int main(){
    enum week workday, weekday;
    weekday = sat;
    printf("mon = %d\n", mon);
    printf("tue = %d\n", tue);
    printf("wed = %d\n", wed);
    printf("thu = %d\n", thu);
    printf("fri = %d\n", fri);
    printf("sat = %d\n", sat);
    printf("sun = %d\n", sun);
    return 0;
}
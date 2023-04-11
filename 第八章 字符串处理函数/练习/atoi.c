#pragma warning(disable: 4996)
#include<stdio.h>


int myatoi(const char* str)
{
    const char* p = str;
    int result = 0;
    if(*str != '\0')
    {
        if(*str == '-')
        {
            p++;
            if(*(str+1) != ('9'||'8'||'7'||'6'||'5'||'4'||'3'||'2'||'1'||'0'))
            {
                return 0;
            }
            else
            {
                while(*p != '\0' && (*p == ('9'||'8'||'7'||'6'||'5'||'4'||'3'||'2'||'1'||'0')))
                {
                result = result * 10 + (int)(*p - '0');
                p++;
                }
                return -result;
            }
        }
        else
        {
            if(*str != ('9'||'8'||'7'||'6'||'5'||'4'||'3'||'2'||'1'||'0'))
            {
                return 0;
            }
            else
            {
                while(*p != '\0' && (*p == ('9'||'8'||'7'||'6'||'5'||'4'||'3'||'2'||'1'||'0')))
                {
                result = result * 10 + (int)(*p - '0');
                p++;
                }
                return result;
            }
        }
    }
    else
    {
        return 0;
    }
}


int main(){
    char* a = "123";
    int c = 2;
    if(*a ==  ('9'||'8'||'7'||'6'||'5'||'4'||'3'||'2'||'1'||'0')){
        c = 0;
    }
    printf("%c\n", *a);
    printf("%d\n", c);
    return 0;

}
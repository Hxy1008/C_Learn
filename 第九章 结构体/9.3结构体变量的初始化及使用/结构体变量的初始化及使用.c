#include<stdio.h>
#include<string.h>

struct stu{
          int num;
          char name[20];
          char sex;
          char* addr;
};

int main()                                 
{
     struct stu bob;
     struct stu lucy = {
          101,
          "lucy",
          'f'
     };
     bob.num = 101;
     strcpy(bob.name, "bob");
     bob.addr = "beijing";
     printf("bob.name = %s\n", bob.name);
     printf("bob.num = %d\n", bob.num);
     printf("bob.addr = %s\n", bob.addr);

     

     
     return 0;
}
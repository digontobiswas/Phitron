void fun(int *p)
{
    *p =50;
    printf("*p er address-%p\n",&*p);
    printf("p er address-%p\n",&p);
}

#include <stdio.h>
int main(){
      int x= 10;
      fun(&x);
   printf("Main function e x er value- %d\n", x);
   printf("x er add ress-%p\n", &x);
    
    return 0;
}
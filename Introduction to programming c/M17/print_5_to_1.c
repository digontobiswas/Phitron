#include <stdio.h>
void fun(int i)

//porer retun er line ta k bole base case but why
{   if(i==0) return;
    printf(" %d",i);
    fun(i-1);
}
int main(){
   int i =5;
   fun(i);
    
    return 0;
}
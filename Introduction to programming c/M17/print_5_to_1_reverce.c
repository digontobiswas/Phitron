#include <stdio.h>
void fun(int i)
{
    if(i==6) return;
    fun(i +1);
    printf(" %d", i);
     
    
    
}
int main(){
     int i =1;
     fun(i);
    
    return 0;
}
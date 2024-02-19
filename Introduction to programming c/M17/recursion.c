//64512 bar print korar pore stack overflow hoiya geche....program crash korce 
#include <stdio.h>
void fun()
{
    printf("Fun\n");
    fun();
}


int main(){
     
    fun();
    return 0;
}
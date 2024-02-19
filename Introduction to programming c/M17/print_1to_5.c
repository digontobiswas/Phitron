#include <stdio.h>
int fun(int i)
{
    if(i==6) return ;  //for void function sir says give return like this
    printf(" %d", i);
     fun(i +1);
    // if (i<5)
    // {  fun(i+1);
    //     return 0;
    // }  //my concept work for int function but but for void function sir say a concept that is in fornt need to decalr return value
    
}
int main(){
     int i =1;
     fun(i);
    
    return 0;
}
void fun(int x)
{    
    printf("Main er x er value pass korar pore-%d\n", x);
    x= 100;
    printf("fun functtion e x address %p\n", &x);
    printf("functiuon e x er value alada deyar pore-%d\n", x);
}

#include <stdio.h> 
int main(){

    int x= 10;
    printf("Main x er address %p\n", &x);
    fun(x);
    printf("Main er x er value-%d\n", x);

    return 0;
}
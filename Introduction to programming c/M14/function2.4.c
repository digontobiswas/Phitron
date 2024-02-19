//return type + parameter
#include <stdio.h>
int sum()    //1st read number 10 line test a time without void and then put void and see what is happend;
             //void deya mane ami vai ondho ami to value input nite parbo na 
{     int a, b;
    scanf("%d %d", &a ,&b);
    int s = a+b;
    //return s;
}
int main(){
    int a=sum(100);//if i give parameter as 100 then nothing is happend but in my build fuinction parameter is void then he say input is so large beacuse void is emtry parameter function so give void and see.
    printf("%d", a);
    return 0;
}
//no return + parameter
#include <stdio.h>
void sum (int x, int y)
{
    int s= x+y;
   // return; //there have no retun thats why it dont give like return 0 or something....after check i saw that not work functuion.
    printf("%d", s);
    //there have no return becuase void function. loop control by break as like that we can control function by retun; arter retun function will not work poperly.
   
    //lest check by put a return before printf("%d", s); . after checking it would be commentout for next work.
     return;
}

int main(){

int a, b;
scanf("%d %d", &a, &b);
sum(a,b); //check by call again and without call without call nothing will happen.
    return 0;
}
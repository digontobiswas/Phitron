#include <stdio.h>
//no return + no parameter so allthing work inside the void function then need to call it inside main function
//then it wil be work fine.
void sum (void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int s= a+b;
    printf("%d", s);
}
int main(){

    sum();
    return 0;
}
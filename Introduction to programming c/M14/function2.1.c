//return type + parameter
#include <stdio.h>
int sum()
{     int a, b;
    scanf("%d %d", &a ,&b);
    int s = a+b;
    return s;
}
int main(){
    int a=sum();
    printf("%d", a);
    return 0;
}
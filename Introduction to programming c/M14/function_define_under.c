#include <stdio.h>

//just past functuion data type and name with parameter if i declear function under the main function
//if i don't put here this things then showing some error.
int sum(int x, int y);
int main(){

    printf("%d", sum(200, 300));
    return 0;
}

int sum(int x, int y)
{
    int sum = x+y;
     return sum;
}
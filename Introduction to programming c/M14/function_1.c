//return type + parameter
#include <stdio.h>

int sum(int x, int y)
{
    int a = x+y;
     return a;
}
    

int main(){

  //int result =   sum(10, 20);
  //printf("%d", result);

  //same result give if i print the function

  printf("%d\n",sum(30, 40));
  printf("%d",sum(200, 300));
    
    return 0;
}
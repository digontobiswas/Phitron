#include <stdio.h>
int main(){

  int a, b, temp;
  scanf("%d %d", &a, &b) ;
  temp = a;
  a = b;
  temp =b;
  printf("a=%d\nb=%d", a, b);

    return 0;
}
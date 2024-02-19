#include <stdio.h>
int main(){

  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if (a<b && a<c)
  {
    printf("%d\t",a);
  }
  else if (b<a && b<c)
  {
   printf("%d\t", b);
  }
  else{printf("%d\t",c);}
  

  if (a>b && a>c)
  {
    printf("%d\t",a);
  }
  else if (b>a && b>c)
  {
   printf("%d\t", b);
  }
  else{printf("%d\t",c);}
  
  
    return 0;
}
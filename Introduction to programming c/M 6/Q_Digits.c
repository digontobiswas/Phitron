#include <stdio.h>
int main(){

  int tn;
  scanf("%d", &tn);
  for ( int i = 1; i <= tn; i++)
  {
    int n;
  scanf("%d", &n) ;
 
 do{
    printf("%d ", n%10);
    n= n/10;
   
  }while (n!=0);
   printf("\n");
  }
  
  
    return 0;
}
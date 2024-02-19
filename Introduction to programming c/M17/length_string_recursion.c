#include <stdio.h>
int fun(char ar[], int i)
{     
      if (ar[i]=='\0')
      {
       return 0;
      }
      {
       /* code */
      }
      
      int l = fun(ar, i+1);
      return l+1;

}

int main(){
   char a[6] = "Hello";
   fun(a, 0);
   int length = fun(a, 0);
   printf("%d\n", length);
   
    
    return 0;
}
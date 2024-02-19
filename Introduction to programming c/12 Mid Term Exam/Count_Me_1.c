#include <stdio.h>
int main(){

  int n;
  scanf("%d", &n);
  int ar[n] ;
  
  for (int i = 0; i <n; i++)
  {
    scanf("%d",&ar[i]);
    
  }
int dbytwo =0, dbythree =0;
  for (int i = 0; i < n; i++)
  {
    if (ar[i]%2==0)
    {
        dbytwo++;
    }
    else if (ar[i]%3==0)
    {
        dbythree++;
    }
    
  }
   printf("%d %d", dbytwo, dbythree);
 
    return 0;
}
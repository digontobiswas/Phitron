#include <stdio.h>
int main(){

  int n;
  scanf("%d", &n);
  int ar[n];
  int psum = 0;
  int nsum =0;

  for (int i = 0; i <n; i++)
  {
    scanf("%d", &ar[i]);
  }
  for (int i = 0; i < n; i++)
  {
    if (ar[i]>0)
    {
        psum+= ar[i];
    }
    else if (ar[i]<0)
    {
        nsum+=ar[i];
    }
    
  }
  printf("%d %d",psum, nsum);
  
  
    return 0;
}
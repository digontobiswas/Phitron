#include <stdio.h>
int main(){

  int n, x, v;
  scanf("%d", &n);
  int ar[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &ar[i]);
  }
  scanf("%d", &x);
  scanf("%d", &v);

  for (int i = 0; i < n; i++)
     {
        if (x == i)
        {
            ar[i] = v;
        }
        
     }

   for (int i = n-1; i >= 0 ; i--)
     {
        printf("%d ", ar[i]);
     }
    return 0;
}
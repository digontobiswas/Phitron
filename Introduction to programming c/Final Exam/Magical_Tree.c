#include <stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    int row = (n+1)/2+5;
   int s= 1,k= row-1;
   for (int i = 1; i <= row; i++)
   {

    for (int j = 0; j < k; j++)
      {
        printf(" ");
      }
      for (int j = 0; j < s; j++)
      {
        printf("*");
      }

      
      s=s+2;
      k--;
      printf("\n");
   }

   k = ((row*2)-1-n)/2;
   for (int i = 1; i <= k; i++)
        {
            printf("     ");
            for (int j = 1; j <= n; j++)
            {
                printf("*");
            }
            printf("\n");
            
        }
   

    return 0;
}